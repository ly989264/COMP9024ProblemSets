#pragma once
#include <stdio.h>
#include <stdlib.h>
#define PROBLEM_1_1

// There is a 5 - digit number that satisfies 4 * abcde = edcba, that is, when multiplied by 4 yields
// the same number read backwards.Write a C - program to find this number.

int* parse_number(int number, int length);
void find_number();