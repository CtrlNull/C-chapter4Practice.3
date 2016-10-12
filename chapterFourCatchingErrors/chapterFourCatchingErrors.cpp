/*
	This program uses an if/else if statement to assign a
	letter grade (a-f) to a numeric test score.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Constants for grade thresholds

	const int	A_Score = 90,
				B_Score = 80,
				C_Score = 70,
				D_Score = 60;

	int testScore;	// holding a numeric test score

	// Get the numeric test score.
	cout << "Enter your numeric test score and i will\n"
		<< "tell you the letter grade you earned: ";
	cin >> testScore;

	// Determine the letter grade.
	if (testScore >= A_Score)
		cout << "Your grade is A. \n";
	else if (testScore >= B_Score)
		cout << "Your grade is B. \n";
	else if (testScore >= C_Score)
		cout << "Your grade is C. \n";
	else if (testScore >= D_Score)
		cout << "Your grade is D. \n";
	else if (testScore >= 0)
		cout << "Your grade is F.\n";
	else
		cout << "Invalid test score. \n";


    return 0;
}

