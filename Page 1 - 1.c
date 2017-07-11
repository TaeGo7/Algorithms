// 1 + 2 + 3 + ⋯ + 100

#include <stdio.h>

int main(void)
{
	int i = 0;
	int J = 0;

	do
	{
		i += 1;
		J += i;
	} while (i < 100);
	
	printf("%d, %d", i, J);

	return 0;
}
