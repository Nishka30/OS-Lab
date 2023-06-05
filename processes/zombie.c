#include<stdio.h>
#include<unistd.h>
void main(){
if(fork()>0){
printf("I am the parent process");
sleep(30);
}
}

