// CSC-134
// M2LAB1
// Aaron Drake 
// 13 Feb 2025

# include <iostream>
using namespace std;

int main() {
    string name = "Drake";
    int num_apples = 10;
    double price_each = 0.25;
    
    cout << "Welcome to the " << name << " Apple Farm!" << endl;
	cout << "We have " << num_apples << " apples in stock." << endl;
    cout << "Each apple costs " << price_each << endl;
 
 double total_price = num_apples * price_each;
 	cout << "" << endl;
 	cout << "The total price for all " << num_apples;
    cout << " is: $" << total_price << "0" << endl;
    cout << "Thanks for coming by!" << endl;
    return 0;
}
