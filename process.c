#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
int pid;
pid=fork();// return 3 values, 0--to the child process, >0 parent process, -1 error
if(pid<0)
{
printf("fork error\n");
exit(1);
}
else if(pid==0)
{

printf("child id=%d, parent id=%d\n",getpid(),getppid());
printf("In Child Process\n");
sleep(20);
printf("child process\n");
printf("child id=%d, parent id=%d\n",getpid(),getppid());
}
else
{

printf("parent id=%d, child id=%d\n",getpid(),pid);
printf("In parent process\n");
wait(NULL);
printf("parent process\n");
printf("parent id=%d, child id=%d\n",getpid(),pid);
}
return 0;
}
