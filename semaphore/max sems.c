#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
main()
{
    int semid,key,nsem,i;
    key=(key_t)0x30;
    for(i=0;;i++)
    {
        nsem=i+1;
        semid=semget(key,nsem,IPC_CREAT|066);
        if(semid>0)
            printf("\nCreated Semaphore with id=%d",semid);
        else
        {
            printf("\nMaximum no. of sub semaphores id=%d",i);
            exit(0);
            }
        semctl(semid,0,IPC_RMID,0);
    }
}
