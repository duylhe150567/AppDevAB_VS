#include"score.h"

//function definition for input score
void input_score(int scores[])
{
	int i, input = 0;
	//using sentinel controlled loop to get input.
	printf("Enter score, -1 to end :\n");
	for (i = 0; i < MAX && input != -1; i++)
	{
		printf("score %d: ", i + 1);
		scanf_s("%d", &input);
		scores[i] = input;
		/*if (input > 100 && input < 0)
		{
			printf("No");
			i -= 1;
		}
		else scores[i] = input;*/
	}
}