#include <stdio.h>

char *myname(void)
{
	static char me[] = "Dan Gookin";

	return(me);
}

int main()
{
	printf("This course's author is %s\n", myname() );

	return(0);
}

