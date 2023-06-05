#include <windows.h>
#include <stdio.h>
DWORD Sum;                   /*Double Word - 32 bit unsigned int*/
DWORD Summation(LPVOID num){ /*LPVOID - Pointer to a void object*/
DWORD Upper = *(DWORD*)num,i;
for(i=1;i<=Upper;i++)
Sum+=i; 
printf("\nInside Summation(), Sum of %d natural numbers = %d\n",Upper, Sum);
return 0;
} 
int main(){
DWORD ThreadId;
HANDLE ThreadHandle; /*HANDLE is a token to represent any resource object handled by kernel*/
int number;
printf ("enter number : ");
scanf("%d",&number);
ThreadHandle = CreateThread(NULL,0,Summation,&number,0, &ThreadId);
/* parameters are default security attribute, default stack size, */
/*name of thread function, argument to thread function, thread creation flag and thread id*/
if(ThreadHandle!=NULL)/*CreateThread() returns NULL for unsuccessful creation of thread*/
 {
     WaitForSingleObject(ThreadHandle,INFINITE);/*to wait for the thread to complete*/
     CloseHandle(ThreadHandle); /*Close thread handle*/
     printf("\nInside main(), Sum of %d natural numbers = %d\n\n",number, Sum); 
 }
}
