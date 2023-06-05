#include<unistd.h>
#include<stdio.h>
#include<signal.h>
void signal_handle(int signum)
{
        printf("\n inside user defined handler");
        signal(SIGINT,SIG_DFL);
}
int main()
{
        int i;
        signal(SIGINT,signal_handle);
        for(i=1;;i++)
        {
                printf("%d",i);
                sleep(1);
        }
        return 0;
}
