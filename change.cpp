// Change.cpp
// Mia Campanella 
// Perm: A2A3M49
#include <iostream>
using namespace std;
void compute_coins(int amount)
	//Precondition: 0 < amount < 100
	//Postcondition: the function prints out the number of quarters, dimes, and pennies needed to make the amount value 
{
	cout << amount << " cents can be given in ";
	int quarters = amount / 25;
	amount %= 25; 

	int dimes = amount / 10;
	amount %= 10;

	int pennies = amount;
	
	cout << quarters << " quarter" << (quarters == 1 ? "" : "s") << ", ";

	cout << dimes << " dime" << (dimes == 1 ? "" : "s") << ", ";

	cout << pennies << " penny << (pennies == 1 ? "." : "ies.") <<endl;
}
int main()
{
	int amount;
	do {
		cout << "Enter number of cents (or zero to quit): ";
		cin >> amount;

	if (amount > 0 && amount < 100){
		compute_coins(amount);
	} else if (amount > 99) {
		cout << "Amount is out of bounds. Must be between 1 and 99." << endl;
	} else if (amount < 0){
		cout << "Invalid input. Please enter a non-negative number." << endl;
	}
	} while (amount != 0);

	return 0;
}


