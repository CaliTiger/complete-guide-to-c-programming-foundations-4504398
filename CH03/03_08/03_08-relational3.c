#include <stdio.h>

int main()
{
	int a = 0;

	while( a <= 20 )
	{
		puts("Good day to you!");
		a++;
		if( a == 3 )
			break;
	}

	return(0);
}
