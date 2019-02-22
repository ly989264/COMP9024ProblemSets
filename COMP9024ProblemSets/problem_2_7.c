#include "problem_2_7.h"

void testing()
{
	PersonT per1;
	PersonT per2;
	PersonT *ptr;
	ptr = &per1;
	per1.studentID = 3141592;
	ptr->gender = 'M';
	ptr = &per2;
	ptr->studentID = 2718281;
	ptr->gender = 'F';
	per1.age = 25;
	per2.age = 24;
	ptr = &per1;
	per2.WAM = 86.0;
	ptr->WAM = 72.625;
	printf("%d, %d, %c, %f\n", per1.studentID, per1.age, per1.gender, per1.WAM);
	printf("%d, %d, %c, %f\n", per2.studentID, per2.age, per2.gender, per2.WAM);
}