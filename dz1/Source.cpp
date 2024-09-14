#include <iostream>;

using namespace std;

int main()
{
	char symbol = 'A';
	cout << "Enter syhmbol -> ";
	cin >> symbol;

	if ((int)symbol >= 65 && (int)symbol <= 90) {
		cout << "This symbol is letter" << endl;
	}
	else if ((int)symbol >= 97 && (int)symbol <= 122) {
		cout << "This symbol is letter" << endl;
	}
	else if ((int)symbol >= 32 && (int)symbol <= 48) {
		cout << "This symbol is punctuation mark" << endl;
	}
	else if ((int)symbol >= 91 && (int)symbol <= 96) {
		cout << "This symbol is punctuation mark" << endl;
	}
	else if ((int)symbol >= 123 && (int)symbol <= 126) {
		cout << "This symbol is punctuation mark" << endl;
	}
	else if ((int)symbol >= 48 && (int)symbol <= 57) {
		cout << "This symbol is number" << endl;
	}

	int user_operator1 = 0, user_operator2 = 0;
	float price = 0, minutes = 0;
	
	cout << "Chose your mobile operator:\n1)Kyivstar 2)Vodafone 3)Lifecell\n--> ";
	cin >> user_operator1;
	cout << "Chose the interlocutor's mobile operator:\n1)Kyivstar 2)Vodafone 3)Lifecell\n--> ";
	cin >> user_operator2;
	if (user_operator1 == user_operator2)
	{
		cout << "Your and interlocutor`s mobile operators are same, price of your call is 0 uah" << endl;
	}
	else{
		cout << "Enter price for 1 minute -> ";
		cin >> price;
		cout << "Enter how much minutes was call -> ";
		cin >> minutes;
		cout << "Your call continued for " << minutes << " minutes, the price of call is " << minutes * price<< " uah" << endl;
	}

	int strokes = 0, count_abscents = 0, salary = 0, choice = 0;

	
	do {
		cout << "Chose what to do:" << endl;
		cout << "1) Enter the Vasya`s salary and count of abscents. Program will count how much strokes of code Vasya must to write" << endl;
		cout << "2) Enter how much strokes write Vasya and Vasya`s salary. Program will count how much times vasya can be abscent." << endl;
		cout << "3) Enter how much strokes write Vasya and count when Vasya was abscent. Program will count how much Vasya earned." << endl;
		cout << "4) Exit the program"<<endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter Vasya`s salary and count of abscents --> ";
			cin >> salary >> count_abscents;
			for (int i = 0; i <= count_abscents; i++) {
				if (i % 3 == 0 && i != 0) {
					salary -= 20;
				}
			}
			if (salary % 50 == 0) {
				cout << "Vasya must write " << (salary / 50) * 100 << " strokes" << endl;
			}
			else if (salary % 50 != 0) {
				cout << "Vasya must write " << ((salary / 50) + 1) * 100 << " strokes" << endl;
			}
			break;
		case 2:
			cout << "Enter count of strokes and Vasya`s salary -> ";
			cin >> strokes >> salary;
			if (strokes / 100 * 50 != salary) {
				cout << "Vasya can`t get this salary" << endl;
			}
			else {
				cout << "Vasya can be abscent for " << salary / 20 * 3 << " times"<<endl;
			}
			break;
		case 3:
			cout << "Enter count of strokes and count of Vasya`s abscents -> ";
			cin >> strokes >> count_abscents;
			if ((strokes / 100 * 50) - (count_abscents / 3 * 20) >= 0) {
				cout << "Vasya will gain " << (strokes / 100 * 50) - (count_abscents / 3 * 20) << " dollars" << endl;
			}
			else {
				cout << "Vasya will not earn anything" << endl;
			}
		default:
			break;
		}

	} while (choice != 4);

	return 0;
}