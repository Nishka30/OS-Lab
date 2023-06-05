#include<stdio.h>
#include<unistd.h>
void main(){
	int k;
	k=fork();
	if(k<0)
		printf("Fork failed");
	else if(k==0)
	{
		printf("\n I am the child.");
		printf("\n child process id is :%d",getpid());
		printf("\nParent process id is:%d",getppid());
	}
	else
	{
		printf("\n I am the parent.");
		printf("\n Parent process id is :%d",getpid());
		printf("\nParent of parent process id is:%d",getppid());
	}
 }
	
