#include "problem_1_3.h"

char* sort_charset(const char* charset, const int length)
{
	char* p = malloc(length * sizeof(char));
	unsigned cnt = 0;
	for (int i = 0;i<length;i++)
	{
		int current = *(charset + i);
		if (!cnt)
		{
			*(p + cnt) = current;
			cnt++;
			continue;
		}
		for (int j=0;j<cnt;j++)
		{
			if ((int) current < (int) *(p+j))
			{
				char temp = current;
				current = *(p + j);
				*(p + j) = temp;
			}
		}
		*(p + cnt) = current;
		cnt++;
	}
	return p;
}

void print_strings(char* charset, int length)
{
	charset = sort_charset(charset, length);//need to free manually later
	//
}
