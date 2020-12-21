#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

	int type, guest;
	double pricePerUnit = 0.00, totprice = 0.00;
	float numOfSlices, totSlices, num_of_pizzas=0.00, actualSlice = 0.00;

	cout << "Enter the number of guests in the birthday party : ";
	cin >> guest;
	cout << "\nEnter number of slices each guest get : ";
	cin >> numOfSlices;
	cout << endl;

	cout << "|       Type     |    Size    |     Number of Slices    |     Price/Unit(RM)     |" << endl;
	cout << "|    Personal    |      6     |             4           |          10.50         |" << endl;
	cout << "|     Regular    |      9     |             6           |          16.00         |" << endl;
	cout << "|      Large     |     12     |             8           |          32.50         |" << endl;
	cout << "|   Extra Large  |     15     |             12          |          47.00         |" << endl << endl;

	cout << "Choose pizza type (enter 1 for : Personal) (enter 2 for :Regular) (enter 3 for:Large) (enter 4 for:Extra Large) : ";
	cin >> type;

	switch (type) {

	case 1: {
		actualSlice = 4;
		pricePerUnit = 10.53;
		break;
	}
	case 2: {
		actualSlice = 6;
		pricePerUnit = 16.00;
		break;
	}
	case 3: {
		actualSlice = 8;
		pricePerUnit = 32.50;
		break;
	}
	case 4: {
		actualSlice = 12;
		pricePerUnit = 47.00;
		break;
	}
	default: {
		cout << "\nWRONG INPUT ! " << endl;
		break;
	}
	}

	totSlices = guest * numOfSlices;
	num_of_pizzas = ceil(totSlices / actualSlice);
	totprice = pricePerUnit * num_of_pizzas;


	cout << "Number of price per unit: RM" << pricePerUnit << endl;
	cout << "Quantity of Pizza required : " << setprecision(2) << num_of_pizzas << endl;
	cout << "Total Price : RM" << fixed << setprecision(2) << totprice << endl;

	return 0;
}