#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define n_threads 10
int c=0;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
void * incr(void * ptr)
{	
	printf("Unique ID:%d\n",pthread_self());
	pthread_mutex_lock(&mutex1);
	c++;
	pthread_mutex_unlock(&mutex1);
}
void main()
{
	pthread_t t1;
	int i;
	char *m;
	for(i=0;i<n_threads;i++)
	{
	 	pthread_create(&t1,NULL,incr,(void*)m);
	}
	for(i=0;i<n_threads;i++)
	{
		pthread_join(t1,NULL);
	}
	printf("Counter=%d\n",c);
	exit(0);
}	
