#include <iostream>
using namespace std;

//Function prototype

void displayTop(); // Function with no argument and no return value
int getScores(); // Function with no argument but return value
int avgScore(int); // Function with argument and return value
void displayGrade(int); // Function with argument but no return value
void displayBottom(); // Function with no argument and no return value

int main()
{
	int average;

	displayTop();
	average = avgScore(getScores());
	cout << "\nThe average score is " << average << endl;
	displayGrade(average);
	displayBottom();

	return 0;
}

//function header

void displayTop() //Function with no argument and no return value
{
	cout << "Find average grade for 5 scores" << endl;
	cout << "----------------------------------" << endl;
	cout << "----------------------------------" << endl;
}

void displayBottom() //Function with no argument and no return value
{
	cout << "\n----------------------------------" << endl;
	cout << "----------------------------------" << endl;
}

int getScores()  // Function with no argument but return value
{
	int score = 0;
	int totScore = 0;
	for (int i = 0; i < 5; i++)   
	{
		cout << "Enter Score : ";
		cin >> score;
		if ((score >= 0) && (score <= 100)){
			totScore = totScore + score;
		}
		else {
			cout << "!!! INVALID SCORE" << endl;
			i--;
		}
	}
	return totScore;
}

int avgScore(int totScore) //Function with argument and return value
{
	int avg, a;
	avg = (double)totScore / 5;
	a = round(avg);

	return avg;
}

void displayGrade(int average)  //Function with argument but no return value
{
	char grade = ' ';

	if ((average >= 80) && (average <= 100))
	{
		grade = 'A';
	}
	else if ((average >= 65) && (average <= 79))
	{
		grade = 'B';
	}
	else if ((average >= 50) && (average <= 64))
	{
		grade = 'C';
	}
	else if ((average >= 40) && (average <= 49))
	{
		grade = 'D';
	}
	else if ((average >= 0) && (average <= 39))
	{
		grade = 'E';
	}
	cout << "The average grade is " << grade << endl;

}