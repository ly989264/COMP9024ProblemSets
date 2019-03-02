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
//#include "single_linked_list.h"
//#include "problem_3_4.h"
//#include "stack_adt.h"
//#include "problem_3_5.h"
//#include "queue_adt.h"
//#include "problem_3_6.h"
#include "problem_3_7.h"


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
#ifdef PROBLEM_3_4
	struct queue* x = create_queue();
	printf("The length of the queue is %\d.\n", get_length_queue(x));
	push_queue(x, 1);
	push_queue(x, 2);
	push_queue(x, 5);
	printf("The length of the queue is %d.\n", get_length_queue(x));
	print_queue(x);
	printf("Pop from the queue: %d.\n", pop_queue(x));
	printf("The length of the queue is %d.\n", get_length_queue(x));
	print_queue(x);
	free_queue(x);
#endif
#ifdef PROBLEM_3_5
	holder();
#endif
#ifdef PROBLEM_3_6
	operate_3_6();
#endif
#ifdef PROBLEM_3_7
	operate_3_7();
#endif
	return 0;
}

