#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>
int main()
{
pid_t p;
printf("Before FORK\n");
p=fork();
if(p==0)
{
printf("I am the Child Process having ID %d\n",getpid());
printf("My Parent ID is %d\n",getppid());
}
else
{
wait(NULL);
printf("My Child Process ID is %d\n",p);
printf("I am Parent Having ID %d\n",getpid());
}
printf("Common\n");
}
