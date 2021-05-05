#include"score.h"  // user-difined header files.
// main function only sketch out the logic of program
void main()
{
	int scores[MAX], marks[MAX];
	int statistics[6] = { 0 }; //holding how many student have got marks 0,1,2,...
	int m[30] = { 0 };

	input_score(scores);
	evaluation(scores, marks);
	classification(marks, statistics, scores);
	output_results(marks, statistics, scores);
}