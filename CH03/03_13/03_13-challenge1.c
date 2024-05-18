#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	// add
	printf(" %d add %d is %d\n", a, b, a+b);
	// subtract
	printf(" %d subtract %d is %d\n", a, b, a-b);
	// multiply
	printf(" %d multiple %d is %d\n", a, b, a * b);
	// divide
	printf(" %d divide %d is %f\n", a, b, (float)a/b);
	// modulus
	printf(" %d modulus %d is %d\n", a, b, a%b);
	// bit shift right
	printf(" %d bit shift right %d is %d\n", a, b, a >> b);
	// bit shift left
	printf(" %d bit shift left %d is %d\n", a, b, a << b);

	return 0;
}
