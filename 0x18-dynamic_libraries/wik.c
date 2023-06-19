#include <stdlib.h>
#include <unistd.h>

/**
 * srand - Overwrites the srand function in the libc shared object
 * @syd: The seed to use for the random number generator. [Will be Ignored]
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
