#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PROBLEM_1_3

// Write a C program that outputs, in alphabetical order, all the distinct strings that use each of
// the characters 'c', 'a', 't', 'd', 'o', 'g' exactly once.How many strings does the program generate ?

char* sort_charset(const char* charset, const int length);void print_strings(char*, int);