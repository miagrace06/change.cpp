//calculator.cpp
//By: Mia Campanella
//Calculate.cpp
//By: Mia Campanella
//Created on: 10-09-2024
//
#include <iostream>
#include <cstdlib>
using namespace std;

//Usage: /calculate int char int
// char can be one of 4 things: + - x or &
int main(int argc, char *argv[])
{
        //Part 1: Check to see if the number of arguments is correct
        if (argc != 4){
                cerr << "Number of arguments is incorrect." << endl;
                exit(1);
        }

        //Part 2: Convert arguments into integers (only those that need it!)
        int num1 = atoi(argv[1]);
        char operation = argv[2][0];
        int num2 = atoi(argv[3]);
	
        //Part 3: Check for illegal operation like divide by zero
        if (operation != '+' && operation != '-' && operation != 'x' && operation != '%') {
                cerr << "Bad operation choice." <<endl;
                exit(1);
        }

        if (operation == '%' && num2 == 0){
                cerr << "Cannot divide by zero." << endl;
                exit(1);
        }

        //Part 4: Do the appropriate calculations
        int result;
        switch (operation) {
                case '+':
                        result = num1 + num2;
			break;
                case '-':
                        result = num1 - num2;
                        break;
                case 'x':
                        result = num1 * num2;
			break;
                case '%':
                        result = num1 % num2;
			break;
        }

        cout << result <<endl;

        return 0;
}
