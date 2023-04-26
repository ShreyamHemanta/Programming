#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid=fork();
	if(pid == -1)
	{
		perror("fork");
		return 1;
	}
	else if(pid == 0)
	{
		printf("Child Process\n");
	}
	else
	{
		printf("Parent Process\n");
	}
    return 0;
}