#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void * loopn(int * n)
{
	int i,s=0,p;
	p=*n;
	for(i=1;i<=p;i++)
		s+=i;
	printf("Sum of Natural Numbers with loop=%d\n",s);
}
void * wn(int * n)
{
	int s=0,p;
	p=*n;
	s=p*(p+1)/2;
	printf("Sum of Natural Numbers without loop=%d\n",s);
}
void main()
{
	pthread_t t1,t2;
	int n;
	printf("Enter the natural number:");
	scanf("%d",&n);
	int *n1 =&n;
	int ret1,ret2;
	ret1 = pthread_create(&t1,NULL,loopn,(void*)n1);
	ret2 = pthread_create(&t2,NULL,wn,(void*)n1);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	printf("Thread 1 Return :%d\n",ret1);
	printf("Thread 2 Return :%d\n",ret2);
	exit(0);
}

