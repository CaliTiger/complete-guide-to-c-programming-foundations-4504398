#include <stdio.h>

int main()
{
	int row;
	char column;

	for(row=1;row<=10;row++)
	{
		for(column='A';column<='K';column++)
		{
			printf("%2d%c   ",row,column);
		}
		putchar('\n');
	}

	return(0);
}
