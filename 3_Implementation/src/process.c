#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
int p;
char choice;

printf("Enter Choice (1/2): ");
scanf("%c", &choice);

switch(choice)
    {
case '1':
p=fork();

if(p==0)
{
printf("child process%d\n parent id %d\n",getpid(),getppid());
sleep(5);
printf("child executing");
}
else
{
printf("parent process id %d",getppid());
printf("parent process is going to be terminated\n");
}
break;

case '2':
p=fork();
if(p==0)
{
printf("child process with id %d\n parewnt process %d\n",getpid(),getppid());
}
else
{
printf("\nparent proces with id %d",getppid());
sleep(5);
printf("\nchild process id %d\n",getpid());
}            
break;

// For invalid input  //
        default:
            printf("Error! Wrong Input");
    }

    return 0;
}
