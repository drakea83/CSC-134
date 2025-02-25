// CSC-134
// M2HW1 - Gold
// Question 1
// Aaron Drake 
// 25 Feb 2025

# include <iostream>
using namespace std;

int main() {
    string name;
    int account_balance;
    double deposit;
    double withdrawal;
    int account_number = 123456789;
    
    cout << "Please enter your name." << endl;
    cin >> name;
    cout << "What is the starting account balance?" << endl;
    cin >> account_balance;
    cout << "What amount do you wish to deposit?" << endl;
    cin >> deposit; 
    cout << "What amount do you wish to withdrawal?" << endl;
    cin >> withdrawal;

    cout << "Account name: " << name << "'s checking account" << endl;
    cout << "Account number: " << account_number << endl;
    double current_account_balance = account_balance + deposit - withdrawal;
    cout << "The current account balance is: $" << current_account_balance << endl;


    return 0;
}