#include <stdio.h>
// #include "problem_1_1.h"
// #include "problem_1_2.h"
// #include "problem_1_3.h"
// #include "problem_1_4.h"
// #include "problem_1_5.h"
// #include "problem_1_6.h"
// #include "problem_1_7.h"
// #include "problem_1_8.h"
// #include "problem_2_1.h"
// #include "problem_2_2.h"
// #include "problem_2_4.h"
// #include "problem_2_7.h"
// #include "problem_3_1.h"
// #include "problem_3_2.h"
// #include "problem_3_3.h"
#include "single_linked_list.h"


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
#ifdef PROBLEM_1_6
	printf("%d, %d, %d.\n", Fib(1), Fib(5), Fib(10));
#endif
#ifdef PROBLEM_1_7
	printf("%d\n", find_largest(3, 1, 5));
#endif
#ifdef PROBLEM_1_8
	sort_sequence();
#endif
#ifdef PROBLEM_2_2
	stack_testing_function();
#endif
#ifdef PROBLEM_2_4
	convert_base2(13);
	convert_base2(128);
	convert_base2(127);
#endif
#ifdef PROBLEM_2_7
	testing();
#endif
#ifdef PROBLEM_3_1
	int *arr = makeArrayOfInts();
	for (int i=0;i<10;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
#endif
#ifdef PROBLEM_3_2
	testing_func();
#endif
#ifdef PROBLEM_3_3
	printf("%lld\n", cal_3(60));
#endif
	struct linked_list* x = create_linked_list();
	printf("The length of the linked list is: %d\n", get_len(x));
	add_element_to_linked_list(x, 5);
	add_element_to_linked_list(x, 6);
	add_element_to_linked_list(x, 7);
	printf("The length of the linked list is: %d\n", get_len(x));
	print_linked_list(x);
	delete_last_element(x);
	printf("The length of the linked list is: %d\n", get_len(x));
	print_linked_list(x);
	free_linked_list(x);
	return 0;
}

