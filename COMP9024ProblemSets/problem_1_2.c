#include "problem_1_1.h"

int* matrix_multi(int (*matrix_a)[2], int row_a, int col_a, int (*matrix_b)[4], int row_b, int col_b)
{
	if (col_a != row_b)
	{
		printf("The first matrix cannot multiple with the second matrix.\n");
		return NULL;
	}
	int *p = malloc(row_a*col_b * sizeof(int));
	int cnt = 0;
	for (int first_row = 0;first_row<row_a;first_row++)
	{
		for (int second_col=0;second_col<col_b;second_col++)
		{
			int result = 0;
			for (int i = 0;i<col_a;i++)
			{
				result += *(*(matrix_a + first_row) + i) * *(*(matrix_b + i) + second_col);
			}
			*(p + cnt) = result;
			++cnt;
		}
	}
	return p;
}

// Things worth to note:
// if x is a two-dimensional array, with the first dimension of 4 and the second dimension of 5, the element type is int
// (which means that x is an array of arrays of five int elements)
// and if p is a pointer that points to x
// then p points to an array of arrays of five int elements
// if we want to access the element of [a][b]
// then we can simply write x[a][b], and p[a][b]
// or we can write *(*(p+a)+b)
// explanation: p is a pointer to an array of arrays of five int elements
// then p+a points to the ath element of the array of arrays of five int elements
// then *(p+a) is the ath array of five int elements, note that this also points to the first element of the ath array of five int elements
// then *(p+a)+b points to the bth element of the ath array
// then *(*(p+a)+b) is the bth element of the ath array