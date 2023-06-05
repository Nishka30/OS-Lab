#include<stdio.h>
#include<unistd.h>
int main(){
int p[2];
pipe(p);
printf("the read end file descriptor value=%d and write end descriptor value = %d",p[0],p[1]);
}
