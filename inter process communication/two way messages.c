#include <stdio.h>
#include <unistd.h>
int main()
{
    int p1[2],p2[2],ret1,ret2,pid;
    char pipe1wmsg[20]="Hi";
    char pipe2wmsg[20]="Hello";
    char readmsg[20];
    ret1=pipe(p1);
    if(ret1==-1)
    	perror("pipe 1 not created!!!");
    ret2=pipe(p2);
    if(ret2==-1)
    	perror("pipe 2 not created!!!");
    pid=fork();
    if(pid != 0)
    {
        close(p1[0]);
        close(p2[1]);
        printf("\nIn Parent:msg to pipe1 is %s\n",pipe1wmsg);
        write(p1[1],pipe1wmsg,sizeof(pipe1wmsg));
        read(p2[0],readmsg,sizeof(readmsg));
        printf("\n Parent read from pipe 2 is %s\n",readmsg);
    }
    else
    {
        close(p1[1]);
        close(p2[0]);
        printf("\nIn Child:msg to pipe1 is %s\n",pipe2wmsg);
        write(p2[1],pipe2wmsg,sizeof(pipe2wmsg));
        read(p1[0],readmsg,sizeof(readmsg));
        printf("\n Child read from pipe 2 is %s\n",readmsg);
    }
}
