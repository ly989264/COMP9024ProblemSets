#pragma once
#include <stdio.h>
#include <stdlib.h>
#define PROBLEM_3_2

/*
 * For the solution given from the problem, making changes to the pointer inside the function named func has no influence on the original pointer.
 * Need to use the pointer to pointer.
 */

void func(int **a);
void testing_func();