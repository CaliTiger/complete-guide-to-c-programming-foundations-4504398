#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float ratio = 3.0 / 4.0; // ??? declare constant ratio equal to 3/4
	char a;												 // declare char a
	int b;												 // declare integer b
	float c;											 // declare float c

	a = 'K';			 // assign char
	b = 11;				 // assign integer
	c = 11.999999; // assign float

	printf("the value of variable a is %c\n", a);		// output char value, e.g., "the value of variable a is '?'"
	printf("the value of variable b is %d\n", b);		// output integer value, e.g., "the value of variable b is ??"
	printf("the value of variable c is %.5f\n", c); // output float value, e.g., "the value of variable c is ???.??"
	printf("the value of ratio is %.4f\n", ratio);	// output value of ratio, e.g., "the value of constant ratio is ???.??"

	return 0;
}
