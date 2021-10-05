#nclude "min.h"
/**
 *_islower - function that checks for lowercase character
 *Returns 1 if c is lowercase
 *Returns 0 otherwise
 */
int _islower(int c)
{
	int answer;
	if(c > 'a' && c < 'z')
	{
		answer=1;
	}
	else{
		answer=0;
	}
	return (answer);
}
