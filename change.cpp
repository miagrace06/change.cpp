//change.cpp
//Mia Campanella 
//Perm: A2A3M49
//Created on: 10-09-2024
#include <iostream>
using namespace std;
void compute_coins(int amount)
	//Precondition: 0 < amount < 100
	//Postcondition: the function prints out the number of quarters, dimes, and pennies needed to make the amount value 
{
	if (amount == 1){
		cout << amount << " cent can be given in ";
	} else {
		cout << amount << " cents can be given in ";
	}
	int quarters = amount / 25;
	amount %= 25; 

	int dimes = amount / 10;
	amount %= 10;

	int pennies = amount;
	
	if (quarters == 1){
		cout << quarters << " quarter";
	} else if (quarters > 1) {
		cout << quarters << " quarters";
			}

	if (quarters > 0 && (dimes > 0 || pennies > 0)){
		cout << ", ";
	}
	if (dimes == 1){
		cout << dimes << " dime";
	} else if (dimes > 1) {
		cout << dimes << " dimes";
	}
	if (dimes > 0 && pennies > 0){
		cout << ", ";
	}
	
	if (pennies == 1) {
		cout << pennies << " penny." <<endl;
	}else if (pennies > 1){
		cout << pennies << " pennies." << endl;
	} else {
		cout << "." << endl;
	}
	
	
		
}
int main()
{
	int amount;
	do {
		cout << "Enter number of cents (or zero to quit):"<<endl;
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


