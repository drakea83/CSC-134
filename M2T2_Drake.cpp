// CSC-134
// M2T2
// Aaron Drake 
// 9 Feb 2025

# include <iostream>
using namespace std;

int main() {
    string name;
    int num_chips;
    double price_each;
    
    cout << "Please enter your name." << endl;
    cin >> name;
    cout << "How many chips are for sale?" << endl;
    cin >> num_chips;
    cout << "How much is each chip?" << endl;
    cin >> price_each;
   
   cout << "Welcome to the " << name << "'s Chip Store!" << endl;
   cout << "We have " << num_chips << " in stock." << endl;
   cout << "The price per chip is $" << price_each << endl;

 double total_price = num_chips * price_each;
 	cout << "" << endl;
 	cout << "The total price for all " << num_chips;
    cout << " is: $" << total_price << endl;
    cout << "Thanks for coming by!" << endl;

    return 0;
}
