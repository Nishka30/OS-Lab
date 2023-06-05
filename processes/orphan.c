#include<stdio.h>
#include<unistd.h>
void main(){
	int k;
	k=fork();
	if(k<0)
		printf("Fork failed");
	else if(k==0)
	{
		printf("\n I am the child and my pid is %d",getpid());
		printf("Before sleeping,my parent's id is %d",getppid());
		
		sleep(5);
		
		printf("\n I am orphan process and my pid is:%d",getpid());
		printf("After sleeping,my parent's id is %d",getppid());
		
		}
		else
	{
		printf("\n I am the parent.");
		printf("\n Parent process id is :%d",getpid());
		
	}
 }
	
