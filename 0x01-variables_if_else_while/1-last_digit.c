#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char n1[] = "Last digit of %d", n ;
	int num = n%10;

	if (num > 5)
		printf(n1," is ",num, " and is greater than 5" );
	else if (num < 6)
	}
		printf(n1," is ",num, " and is less than 6" );
	}
	else
	{
		printf(n1," is ",num, " and is 0" );
	}

	return (0);
}
