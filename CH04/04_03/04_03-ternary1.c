#include <stdio.h>

int main()
{
	int a, b, c;

	a = 1;
	b = 14;
	c = (a > b) ? a : b; //True then first , else next.
	printf("%d is the greater of %d and %d\n", c, a, b);

	return (0);
}
