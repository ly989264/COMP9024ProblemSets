#pragma once
#include <stdio.h>
#include <stdlib.h>
#define BASE 10
#define PROBLEM_2_1

struct stack
{
	int size;//the maximum size that the stack can hold integers
	int cnt;//the current size of integers in the stack
	int *data;//the pointer that points to the memory chunk in which the integers are stored
};

struct stack* initStack();
int is_empty(const struct stack* current_stack);
void push(struct stack* current_stack, const int value);
int pop(struct stack* current_stack);