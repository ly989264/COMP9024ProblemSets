#include "problem_1_4.h"

void operate(int n)
{
	if (n < 0) return;
	printf("%d ", n);
	while (n!=1)
	{
		if (n%2)
		{
			n = 3 * n + 1;
		}
		else
		{
			n = n / 2;
		}
		printf("%d ", n);
	}
	printf("\n");
}