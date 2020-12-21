#include <iostream>

using namespace std;

int main() {

	double length;
	int type=0;

	cout << "Enter the rejected length(cm) : ";
	cin >> length;

	if (length > 0) {
		if (length <= 30) {
			type = 1;
		}
		else if (length > 30 && length <= 50) {
			type = 2;
		}
		else if (length > 50 && length <= 70) {
			type = 3;
		}
		else {
			type = 4;
		}
	}

	switch (type) {

	case 1: cout << "Type 1\nApproved to export. \n"; break;

	case 2: cout << "Type 2\nRepair material. \n"; break;

	case 3: cout << "Type 3\nOpen selling. \n"; break;

	case 4: cout << "Type 4\nRecycle to community. \n"; break;
		
	default: cout << "Invalid length. \n";

	}

	return 0;
}