#include <stdlib.h>
#include <unistd.h>

/**
 * srand - Overwrites srand function 
 * @syd: seed to use for random number generator
 */
void srand(unsigned int syd)
{
	const char *no_txt = "9 8 10 24 75 - 9\n";
	const char *to = "Congratulations, you win the Jackpot!\n";

	(void)syd;
	write(STDOUT_FILENO, (void *)no_txt, 17);
	write(STDOUT_FILENO, (void *)to, 38);
	exit(EXIT_SUCCESS);
}
