#include <_putchar>
/**
 *
 *
 *
 */
int print_sign(int n)
{
	int answer;
	
	if(n == 0)
	{
		answer=('0');
	}
	else if(n < 0 )
	{
		answer=('-');
	}
	else{
		answer=('+');
	}
	return(answer);
}
