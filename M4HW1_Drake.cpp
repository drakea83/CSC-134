// CSC-134
// M4HW1 - Silver
// Aaron Drake
// 6 Apr 2025

#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum;

    cout << "Enter a number between 1 to 12? This will be the number being multiplied." << endl;
    cin >> firstNum;
    cout << "Enter a second number between 1 to 12? This will be the size of your multiplication table." << endl;
    cin >> secondNum;
    cout << " " << endl;

    for (int i=0; i<= secondNum; i++){
        cout << firstNum << " times " << i << " is " << firstNum * i << endl;
    }
}
