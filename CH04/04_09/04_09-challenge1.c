#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d", &a);

	/* write the loop here */
	do
	{
		/* code */
		puts("-------------------");
		a--;
	} 
	while (a>0);
	

	return (0);
}
