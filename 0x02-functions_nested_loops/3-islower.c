#nclude <_putchar>
/**
 *
 *
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
