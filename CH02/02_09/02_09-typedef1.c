#include <stdio.h>

int main()
{
	typedef float radius;

	radius a;

	a = 27.5;

	printf("A circle with radius %.3f has an area of  %.7f \n",
			a,
			a*a*3.1415926
		  );

	return(0);
}

