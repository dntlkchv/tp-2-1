#include <iostream>
#include <string>
#include <conio.h>

#include "Stack.h"
using namespace std;

Stack stack = Stack();

void applyCoomand(int command) {

	system("@cls||clear");

	switch (command)
	{
	case 1:
		int n;

		cout << "Enter the number: ";
		cin >> n;
		stack.push(n);
		cout << "\033[32mSaved successfully.\033[0m" << endl;
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;


	case 2:
		stack.pop();
		cout << endl << "Press any key to exit" << endl;
		_getch();
		break;


	case 3:
		if (!stack) {
			cout << "Stack is empty!";
		}
		else {
			cout << "Stack is NOT empty!";
		}
		cout << endl << "Press any key to exit" << endl;
		_getch();
		break;

	case 4:
		++stack; //pre inc
		cout << "Done" << "\n";
		cout << endl << "Press any key to exit" << endl;
		_getch();


		break;

	case 5:
		stack++; //post inc
		cout << "Done" << "\n";
		cout << endl << "Press any key to exit" << endl;
		_getch();

		break;

	case 6:
		--stack; //pre dec
		cout << "Done" << "\n";
		cout << endl << "Press any key to exit" << endl;
		_getch();


		break;

	case 7:
		stack--; //post dec
		cout << "Done" << "\n";
		cout << endl << "Press any key to exit" << endl;
		_getch();


		break;

	case 8:
		exit(0);
		break;
	}
}

int main()
{

	int command;

	for (;;)
	{
		system("@cls||clear");

		stack.print();

		cout << endl;

		cout << "1. Add  an element to the queue" << endl;
		cout << "2. Retrieve an element from the queue" << endl;
		cout << "3. Check the stack for emptiness" << endl;
		cout << "4. Increment all values on the stack by its maximum value" << endl;
		cout << "5. Increment all values on the stack by its minimum value" << endl;
		cout << "6. Decrement all values on the stack by its maximum value" << endl;
		cout << "7. Decrement all values on the stack by its minimum value" << endl;
		cout << "8. Exiting the program" << endl;

		cin >> command;

		applyCoomand(command);

	}
}
