#include <iostream>

using namespace std;

//Function prototype
void question(int&, double&, double&, int&);
int calcNewSize(int, double, double);

int main() {

	int startPopSize = 0, numOfYears = 0, newPopSize = 0;
	double birth = 0, death = 0;

	question(startPopSize, birth, death, numOfYears);

	for (int year = 1; year <= numOfYears; year++)
	{
		newPopSize = calcNewSize(startPopSize, birth, death);

		cout << "\nProjected population for Year " << year << " is " << newPopSize << endl;

		startPopSize = newPopSize;
	}

	return 0;
}

//Function header
void question(int& startPopSize, double& birth, double& death, int& numOfYears) {

	do {
		cout << "Enter size of a population (Minumum 2) : ";
		cin >> startPopSize;
		if (startPopSize < 2) {
			cout << "Invalid Population." << endl;
		}
	} while (startPopSize < 2);

	do {
		cout << "Enter approximate number of births (Anuallly) : ";
		cin >> birth;
		if (birth < 0) {
			cout << "Invalid Number of Birth." << endl;
		}
	} while (birth < 0);

	do {
		cout << "Enter approximate number of death (Anuallly) : ";
		cin >> death;
		if (death < 0) {
			cout << "Invalid Number of Death." << endl;
		}
	} while (death < 0);

	do {
		cout << "Enter number of projected years (Minimum 1) :";
		cin >> numOfYears;
		if (numOfYears < 1) {
			cout << "Invalid Year." << endl;
		}
	} while (numOfYears < 1);
}

int calcNewSize(int startPopSize, double birth, double death) {

	int n;

	n = startPopSize * (1 + (birth / startPopSize)) * (1 - (death / startPopSize));

	return n;
}

