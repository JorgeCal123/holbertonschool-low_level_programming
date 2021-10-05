#include <_putchar>
/**
 *
 *
 *
 */
int _isalpha (int c)
{
	int answer;

	if((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'))
	{
		answer=1;
	}
	else{
		answer=0;
	}
	retunr(answer);
}
