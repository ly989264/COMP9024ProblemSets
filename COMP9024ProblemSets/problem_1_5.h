#pragma once
#define PROBLEM_1_5

typedef struct
{
	char weekAbbr[5];
	int day;
	int month;
	int year;
}DateT;//memory requirement: 5*1+4+4+4=17 bytes

typedef struct
{
	int hour;
	int minute;
}TimeT;//memory requirement: 4+4=8 bytes

typedef struct
{
	int transactionNum;
	DateT certainDate;
	TimeT certainTime;
	char mode;
	char details[32];
	int journeyNum;
	char fareApplied[10];
	double fare;
	double discount;
	double amount;
}JourneyT;//memory requirement: 4+17+8+1+32+4+10+8+8+8=100 bytes

//If we want to store millions of records, we can give certain stop or fareApplied certain codes. Or we can store them in one bit.