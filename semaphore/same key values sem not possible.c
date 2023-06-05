#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int semid,shmid,msgid,key,flag=IPC_CREAT|0666;
	key=(key_t)0x40;
	semid=semget(key,0,flag);
	shmid=shmget(key,1024,flag);
	msgid=msgget(key,flag);
	if(semid==-1)
	{
		perror("semget");
		exit(0);
	}
	if(shmid==-1)
	{
		perror("shmget");
		exit(0);
	}
	if(msgget==-1)
	{
		perror("msgget");
		exit(0);
	}
	printf("\n the created semaphore with id = %d",semid);
	printf("\n the created shared memory segment with id= %d",shmid);
	printf("\n the created queue with id is = %d",msgget);
return 0;
}

