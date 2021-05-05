#include "pascal.h"

int fact(int i)
{
	int j, k = 1;
	for (j = 1; j <= i; j++)
	{
		k = k * j;
	}
	return k;
}