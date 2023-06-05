#include<stdio.h>
#include<unistd.h>
#include<signal.h>
int main()
{
        int i;
        signal(SIGINT,SIG_IGN);
        for(i=1;;i++)
        {
                printf("%d:inside the main function",i);
                sleep(1);
        }
        return 0;
}
