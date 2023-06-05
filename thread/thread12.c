#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
void* print_msg(void* ptr);
int main()
{
pthread_t thread1,thread2;


char* msg1="I AM THREAD 1";

char* msg2="I AM THREAD 2";
int ret1,ret2,n;
ret1=pthread_create(&thread1,NULL,print_msg,(int*)msg1);
ret2=pthread_create(&thread1,NULL,print_msg,(int*)msg2);
pthread_join(thread1,NULL);
pthread_join(thread2,NULL);

printf("\n thread1 return %d",ret1);
printf("\n thread2 return %d",ret2);

exit(0);
}
void* print_msg(void* ptr)
{
char *message;
message=(char*)ptr;
printf("%s\n",message);
}
