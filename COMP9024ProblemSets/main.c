#include <stdio.h>
// #include "problem_1_1.h"
// #include "problem_1_2.h"
// #include "problem_1_3.h"
// #include "problem_1_4.h"
#include "problem_1_8.h"

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
#ifdef PROBLEM_1_4
	operate(5);
	operate(6);
#endif
#ifdef PROBLEM_1_8
	sort_sequence();
#endif
	return 0;
}