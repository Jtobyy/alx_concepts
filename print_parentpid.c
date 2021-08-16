#include <stdio.h>
#include <unistd.h>

/**
 *main - prints the parent pid of the current pocess
 *Return: always 0
 */
int main(void)
{
pid_t ppid;
ppid = getppid();
printf("%d\n", ppid);
/* print the current process id */
printf("%d\n", getpid());
return 0;
}
