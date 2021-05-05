#include"pascal.h"
#include <direct.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{
	int a;
	a = get_int(MIN, MAX);
	pascal_triangle(a);
	return 0;
}