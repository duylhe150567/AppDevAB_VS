#include"score.h"
//this function will display all valid marks as first part
//statistics of marks as second part

void output_results(int m[], int st[], int s[])
{
	int i;
	printf("Here are the marks : \n ");
	for (i = 0; i < MAX && s[i] != -1; i++)
	{
		printf("%3d", s[i]);
	}
	puts("");
	for (i = 0; i < MAX && m[i] != -1; i++)
	{
		printf("%3d", m[i]);
	}
	puts(" "); //make new line
	printf("Here are the statistics : \n");
	//printf("%7s%10s\n------------\n", "MARK", "Hits");
	for (i = 0; i < 6; i++)
	{
		printf("Mark %d: %d hits \n", i, st[i]);
	}
}