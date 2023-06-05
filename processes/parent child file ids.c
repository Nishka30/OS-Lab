#include<stdio.h>
#include<unistd.h>
FILE *fp;
void main(){
	int k;
	k=fork();
	if(k<0)
		printf("Fork failed");
	else if(k==0)
	{
	        
		printf("\n I am the child and  my id is :%d",getpid());
		printf("\nParent process id is:%d",getppid());
		fp=fopen("File child.txt","w");
		fputs("this is the child file",fp);
		fclose(fp);
		
		
	}
	else
	{
	        
		printf("\n I am the parent and my process id is :%d",getpid());
		printf("\nParent of parent process id is:%d\n",getppid());
		fp=fopen("File parent.txt","w");
		fputs("this is the child file",fp);
		fclose(fp);
	}
 }
	
