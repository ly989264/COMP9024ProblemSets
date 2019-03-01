#include "problem_1_7.h"

int find_larger(int a, int b)
{
	return (a > b)*a + (a < b)*b;
}

int find_largest(int a, int b, int c)
{
	int d = find_larger(a, b);
	return find_larger(c, d);
}