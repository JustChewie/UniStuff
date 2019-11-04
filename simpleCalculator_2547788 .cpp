// Version Alpha 0.2 

#include <iostream>
#include <string>
using namespace std;

void welcome() { // Creating a function hello() because I used it too many times
	cout << "UniCalc Alpha 0.2\n" << "Created by Artem B\n" << endl << "Select an option (number):\n" << endl; // Showing the info and selection label
}

int main()
{
	welcome(); // Using this function
	do {
		float a, b; // Defining 3 vars | a - first float | b - second float
		int x; // x - selector var
		string z;
		cout << "1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Divide\n" << "5. Quit\n"; // Menu
		cin >> x; // Selector variable 

		if (x == 1) { // First option - adding 
			system("CLS"); // Clear the console
			cout << "ADD\n" << endl;
			cout << "First number: ";
			cin >> a;
			cout << "Second number: ";
			cin >> b;
			cout << "Result: " << a + b << endl << endl;
			system("pause");
		}

		else if (x == 2) { // Second option - subtraction
			system("CLS"); // Clear the console
			cout << "SUBTRACT\n" << endl;
			cout << "First number: ";
			cin >> a;
			cout << "Second number: ";
			cin >> b;
			cout << "Result: " << a - b << endl << endl;
			system("pause");
		}

		else if (x == 3) { // Second option - multiplying
			system("CLS"); // Clear the console
			cout << "MULTIPLY\n" << endl;
			cout << "First number: ";
			cin >> a;
			cout << "Second number: ";
			cin >> b;
			cout << "Result: " << a * b << endl << endl;
			system("pause");
		}

		else if (x == 4) { // Second option - dividing
			system("CLS"); // Clear the console
			cout << "DIVIDE\n" << endl;
			cout << "First number: ";
			cin >> a;
		label: // Label for goto() function, not a good solution but the easiest one
			cout << "Second number: ";
			cin >> b;

			if (b != 0) { // If a person enters a divisor other than 0 the program proceeds
				cout << "Result: " << a / b << endl << endl;
				system("pause");
			}
			else if (b == 0) { // If a person enters a divisor equal to 0 the program tells that it's not a valid option
				cout << "Not a valid option\n";
				goto label; // Using that label I created earlier
			}
		}

		else if (x == 5) { // Option to exit the program 
		exit:
			cout << "Are you sure?[Y/N]\n" << endl; // Asking the user if he really wants to exit the app
			cin >> z; // Different var for the choice

			if (z == "Y" || z == "y") { // If z == 'Y' the app closes
				return 0; // Returning the integer to main()
			}

			else if (z == "N" || z == "n") { // If z == 'N' then the app keeps working
				system("CLS");
				welcome();

			}

			else {
				cout << "Not a valid option\n"; // If the user enters bad char the app asks them to do it again
				goto exit; // Going to exit label
			}
			
		}

		else {
			cout << "Not a valid option\n"; // If the user enters bad int in the menu the app asks him again
			system("pause");
			system("CLS");
			welcome();
		}
		
	}

	while (true);

}