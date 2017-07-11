// 1 + 3 + 5 + 7 + ⋯ 99

#include <stdio.h>

int main(void)
{
	int i = -1;
	int J = 0;
	
	do
	{
		i += 2;
		J += i;
	} while (i < 99);

	printf("%d", J);

	return 0;
}
