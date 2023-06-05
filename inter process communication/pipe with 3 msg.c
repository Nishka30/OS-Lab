#include<stdio.h>
#include<unistd.h>
#define MSGSZE 20
int main(){
int p[2],i;
pipe(p);
char *msg1="This is masg1";
char *msg2="This is masg2";
char *msg3="This is masg3";
char buffer[MSGSZE];
write(p[1],msg1,MSGSZE);
write(p[1],msg2,MSGSZE);
write(p[1],msg3,MSGSZE);
for(i=0;i<3;i++)
{
read(p[0],buffer,MSGSZE);
printf("\n The message for pipe is %s",buffer);
}
}


