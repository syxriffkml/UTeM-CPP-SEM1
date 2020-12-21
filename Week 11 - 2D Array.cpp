#include <iostream>

using namespace std;

const  int BUS = 3, DAY = 7;   //Initialize array size declarators
int menuOperation();
int menuBus(string b[]); //string busList[]
int menuDay(string d[]); //string daylist[]
void viewBusDay(int p); //int passenger
void viewBus(int vB[], string vDay[]); //int passenger[], string dayList[]
void viewAll(int vA[][DAY], string bA[], string dA[]); //int passenger[][DAY], string bussList[], string dayList[]
void viewTotalDay(int [][DAY], int , string []); //question (b)

int main() {

	int operation,plateNo,day;
	int sum = 0;
	//Initialize buses plate number
	string busList[BUS] = { "MAW 4572" , "WJV 441" , "MBV 6560" };
	//Initialize days in a week
	string dayList[DAY] = { "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" ,"Saturday" , "Sunday" };
	//Initialize number of passengers
	int passenger[BUS][DAY] = {
		{40,35,37,32,44,44,44},
		{44,35,30,32,44,37,35},
		{40,40,40,40,40,40,40},
	};

	do {
		operation = menuOperation();
		if (operation == 1) {
			plateNo = menuBus(busList);
			day = menuDay(dayList);
			viewBusDay(passenger[plateNo][day]); //passing individual element of 2d array
		}
		else if (operation == 2) {
			plateNo = menuBus(busList);
			viewBus(passenger[plateNo], dayList); //passing a row of 2d array, whole 1d array
		}
		else if (operation == 3) {
			//function call: passing the whole array
			viewAll(passenger, busList, dayList);
		}
		else if (operation == 4) { //question (b)
			int hari = menuDay(dayList);
			viewTotalDay(passenger,hari,dayList);
		}
		else {
			cout << "Program terminated";
		}
	} while (operation >= 1 && operation <= 4);

	return 0;
}

int menuOperation() {

	int choice;
	cout << "LIST OF REPORTS\n";
	cout << "1. View the number of passengers according to bus and day selected\n";
	cout << "2. View number of passenger according to bus only\n";
	cout << "3. View all data\n";
	cout << "4. View number of passengers according to the day only\n";
	cout << "Press any other key to exit the program\n";
	cout << "Your choice : ";
	cin >> choice;
	cout << endl;

	return choice;
}

int menuBus(string b[]) {
	int choice;
	do {
		cout << "LIST OF BUSSES\n";
		for (int i = 0; i < BUS; i++) {
			cout << i + 1 << ". " << b[i] << endl;
		}
		cout << "Choose the bus: ";
		cin >> choice;
		if (choice < 1 || choice > 3) {
			cout << "Invalid choice. Please try again.";
		}
	} while (choice < 1 || choice > 3);

	return choice - 1;
}

int menuDay(string d[]) {
	int choice;
	do {
		cout << "DAYS IN A WEEK\n";
		for (int i = 0; i < DAY; i++) {
			cout << i + 1 << ". " << d[i] << endl;
		}
		cout << "Choose the day : ";
		cin >> choice;
		if (choice < 1 || choice > 7) {
			cout << "Invalid choice. Please try again.";
		}
	} while (choice < 1 || choice > 7);

	return choice - 1;
}

void viewBusDay(int p) {
	cout << "The number of passenger is " << p << " passengers. \n\n";
}

void viewBus(int vB[], string vDay[]) {

	int total=0;

	cout << "Number of Passenger in a Week.\n";
	for (int i = 0; i < DAY; i++) {
		cout << vDay[i] << ": " << vB[i] << " passengers\n";
		total = total + vB[i];
	}
	cout << "The total numbers of passenger in a week : " << total << " Passengers"; // question (a)
	cout << endl << endl;


}

void viewAll(int vA[][DAY], string bA[], string dA[]) { //int passenger[][DAY], string bussList[], string dayList[]

	int total[3] = {0};
	int sum = 0;

	cout << "Number of Passenger: Bus X Day \n";
	for (int i = 0; i < BUS; i++) {
		cout << "Plate Number : " << bA[i] << endl; //display plate number
		for (int j = 0; j < DAY; j++) {
			cout << dA[j] << ": " << vA[i][j] << " passengers\n";
			total[i] = total[i] + vA[i][j];
		}
		cout << "The total numbers of passenger for bus " << bA[i] << " is " << total[i]; // question (a)
		sum = sum + total[i];
		cout << endl << endl;
	}
	cout << "Total number of passenger for all the bus is " << sum;
	cout << endl << endl << endl;;
}

void viewTotalDay(int passenger[][DAY], int hari, string dayList[]) { //question (b)

	int sum = 0;
	for (int i = 0; i < BUS; i++) {
		sum = sum + passenger[i][hari];
	}
	cout << "Total number of passengers in " << dayList[hari] << " is " << sum << " passengers" <<endl << endl;
}