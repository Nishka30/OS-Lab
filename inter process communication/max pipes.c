#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int p[2],i,ret;
    for(i=0;;i++)
    {
        ret=pipe(p);
        if(ret!=-1)
            printf("\nCreated pipe");
        else
        {
            printf("\nMaximum no. of pipe=%d",i);
            exit(0);
        }
    }
    return 0;
}

