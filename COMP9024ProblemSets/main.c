#include <stdio.h>
// #include "problem_1_1.h"
// #include "problem_1_2.h"
#include "problem_1_3.h"

int main()
{
#ifdef PROBLEM_1_1
	find_number();
#endif
#ifdef PROBLEM_1_2
	int matrix_a[3][2] = { {1,2},{3,4},{5,6} };
	int matrix_b[2][4] = { {1,2,3,4},{5,6,7,8} };
	int *p = matrix_multi(matrix_a, 3, 2, matrix_b, 2, 4);
	for (int i = 0; i < 12; i++) printf("%d ", *(p + i));
	free(p);
#endif
	char x[5] = { 'a','b','x','d','e' };
	// char *p = sort_charset(x, 5);
	// for (int i = 0; i < 5; i++) printf("%c ", p[i]);
	// return 0;
}