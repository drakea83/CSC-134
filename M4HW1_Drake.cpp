// CSC-134
// M4HW1 - Gold
// Aaron Drake
// 6 Apr 2025

#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum;

    cout << "What is the number you want the multiplication table for?" << endl;
    cin >> firstNum;
    cout << "What is the size of the multiplication table?" << endl;
    cin >> secondNum;
    cout << " " << endl;

    for (int i=0; i<= secondNum; i++){
        cout << firstNum << " times " << i << " is " << firstNum * i << endl;
    }
}
