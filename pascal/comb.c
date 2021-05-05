#include "pascal.h"
int comb(int n, int m)
{
	if (n < m) return 0;
	return fact(n) / (fact(n - m) * fact(m));
}