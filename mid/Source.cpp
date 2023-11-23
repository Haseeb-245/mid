#include<iostream>
using namespace std;
int main() {
	int current = 0;
	int intial;
	int threshold;
	int sold, restock;
	char choice = 'y';
	char again = 'a';
	char re = 'r';
	int selection ;
	intial = current;

	
	
		cout << "Enter the intial quantity" << endl;
		cin >> intial;

		cout << "Select the threshold" << endl;
		cin >> threshold;
		do{cout << "Choose the option " << endl;
		cout << "1.RESTOCK" << endl;
		cout << "2.SELL STOCK" << endl;
		cout << "3.Exit " << endl;
		cin >> selection;
		if (selection == 2) {
			do {
				cout << "Enter the value you want to sell" << endl;
				cin >> sold;
				current = intial -= sold;
				if (sold > current) {
					cout << "not enough stock" << endl;
				}
				else {
					cout << "you have sold " << sold << "  units " << endl;
					cout << "The remaining stock is " <<  current  << endl;

				}
				if (current < threshold) {
					cout << "Stock is low please restock " << endl;
				}
				cout << "if you want sell again press a or A else press N" << endl;
				cin >> again;
			} while (again == 'A' || again == 'a');
		}
		else if (selection == 1) {
			do {
				cout << "enter the value you want restock" << endl;
				cin >> restock;
				current = intial += restock;
				cout << "you have added" << restock << " units " << endl;
				cout << "the current stock is " << current << "units" << endl;
				cout << "If you  want to restock again press R/r else press N " << endl;
				cin >> re;


			} while (re == 'r' || re == 'R');
		}
		else {
			break;
		}
	} while (choice == 'y' || choice == 'Y');
}