#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//in a header files we always put the following information
// 1. constant definition
// 2. data structure definition
// 3. function prototype

#define MAX 30

// we dont use complex data structure in this program.
void input_score(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);