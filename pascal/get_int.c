#include"pascal.h"
int get_int(int min, int max)
{
	int t;
	do
	{
		printf("Enter number (%d , %d) :", min, max);
		int r = scanf_s("%d", &t);
		//if (r != 1)
		//{
		//	t = 0; //the users have not given me a number correct value
		//	char temp;
		//	while ((temp = getchar()) != EOF && temp != '\n');
		//}
		//fflushall();
		if (r < 1) return 0;
	} while (t<min || t> max);
	return t;
}