#include "problem_3_3.h"

unsigned long long calculate(int num)
{
	unsigned long long *arr = (unsigned long long*) malloc(num * sizeof(unsigned long long));
	*(arr + 0) = 1;
	*(arr + 1) = 1;
	for (int current = 2;current<num;current++)
	{
		*(arr + current) = *(arr + current - 1) + *(arr + current - 2);
	}
	unsigned long long result = *(arr + num - 1);
	free(arr);
	return result;
}

unsigned long long cal_3(int num)
{
	//only use three to store the number
	unsigned long long first = 1;
	unsigned long long second = 1;
	if (num<=2)
	{
		return first;//or return second, it is the same because the value stored in first and second is the same
	}
	int cnt = 3;
	unsigned long long temp;
	while(cnt!=num)
	{
		temp = first;
		first = second;
		second = temp + first;
		cnt++;
	}
	return first + second;
}