#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int x, y, z;
	int ris_figlio;
	int status;
	pid_t pid = fork();

	if(pid == 0)
	{
		printf("Sono il processo figlio(%d) generato da (%d)\n", getpid(), getppid());
		x = 24 - 6;
		printf("Il risultato dell'espressione 24 - 6 e' %d\n", x);
		exit(x);
	}
	else
	{
		printf("\nSono il padre(%d)\n", getpid());
		y = 14 + 23;
		printf("Il risultato dell'espressione 14 + 23 e' %d\n", y);
		wait(& status);
		ris_figlio = WEXITSTATUS(status);
		z = ris_figlio * y;
		printf("Il risultato dell'espressione finale e' %d\n", z);
	}
	
	return 0;
}