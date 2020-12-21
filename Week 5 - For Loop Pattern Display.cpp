#include <iostream>

using namespace std;

int main() {

	char letter;
	int row, col;

	do {
		cout << "Enter your favourite letter : ";
		cin >> letter;
		cout << "Enter the row number (0 to exit) : ";
		cin >> row;
		if (row == 0) {
			cout << "Program terminated\n\n";
			break;
		}
		do {
			cout << "Enter the column number (column >= row) : ";
			cin >> col;
		} while (col < row);

		int vv = 0;
		for (int i = 1; i <= row; i++) {
			for (int j = 1; j <= (col - vv); j++) {
				cout << letter;
			}
			vv++;
			cout << endl;
		}
		cout << endl;
	} while (row != 0);



	return 0;
}