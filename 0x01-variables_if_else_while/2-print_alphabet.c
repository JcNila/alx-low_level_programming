#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more header goes there */

int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z' ; low++)
		putchar(low);
	putchar('\n');

	return (0);
}

