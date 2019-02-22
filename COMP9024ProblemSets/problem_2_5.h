#pragma once
#include <stdio.h>
#define MAXQUEUEITEM 10

struct p_queue
{
	int data[MAXQUEUEITEM];
	int base;
	int num;
};

void p_queueInit();
int p_isEmpty();
void p_enqueue(int);
int p_dequeue();