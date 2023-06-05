#include <stdio.h>
#include <unistd.h>
int main()
{
    int p1[2],ret1,pid;
    char pipe1wmsg[20]="Hi";
    char readmsg[20];
    ret1=pipe(p1);
    if(ret1==-1)
    	perror("pipe 1 not created!!!");
    pid=fork();
    if(pid != 0)
    {
       
        printf("\nIn Parent:msg to pipe1 is %s\n",pipe1wmsg);
        write(p1[1],pipe1wmsg,sizeof(pipe1wmsg));
    }
    else
    {
        //close(p1[1]);
        read(p1[0],readmsg,sizeof(readmsg));
        printf("\n Child read from pipe 2 is %s\n",readmsg);
    }
}



