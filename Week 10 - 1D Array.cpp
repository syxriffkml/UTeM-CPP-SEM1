#include <iostream>

using namespace std;

void numOfGrade(int []);
void graph_grade(int []); 
const int saiz = 5;


int main() {

	int no_grade[saiz];
	

	numOfGrade(no_grade);
	graph_grade(no_grade);
	
	return 0;
}

void numOfGrade(int no_grade[]) {

	char grade[saiz] = { 'A','B','C','D','E' };

	for (int i = 0; i < saiz; i++) {
		cout << "\nEnter number of grade " << grade[i] << " students : ";
		cin >> no_grade[i];
	}
}

void graph_grade(int no_grade[]) {

	char grade[saiz] = { 'A','B','C','D','E' };

	cout << "\n\n-----GRAPH : NUMBER OF STUDENTS BASED ON GRADE-----" << endl;
	for (int i = 0; i < saiz; i++) { 
		cout << "Grade " << grade[i] << " | ";
		for (int j = 0; j < no_grade[i]; j++) {
			cout << " * ";
		}
		cout << no_grade[i] << endl;
	}
}