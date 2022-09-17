#include <stdlib.h>
#include <time.h>
/* more headers here */

/* betty style doc for function here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code here */
	return (0);
}
