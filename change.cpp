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
	int quarters, dimes, pennies;
	quarters = amount / 25;
	amount %= 25; 

	dimes = amount / 10;
	amount %= 10;

	pennies = amount;
	
	if (quarters == 1){
		cout << quarters << " quarter, ";
	}else {
		cout << quarters << " quarters, ";
	}
       	if (dimes == 1) {
	       	cout << dimes << " dime, ";
      } else {
	      cout << dimes << " dimes, ";
      }

      if (pennies == 1) {
	      cout << pennies << " penny." << endl;
      } else {
	      cout << pennies << " pennies." << endl;
      }
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


