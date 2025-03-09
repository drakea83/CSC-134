// CSC-134
// M3LAB2
// Aaron Drake
// 9 Mar 2025

#include <iostream>

using namespace std;

int main()
{
    int number_grade;

    cout << "Enter the number grade: ";
    cin >> number_grade;

    if (number_grade >= 90){
        cout << "Your letter grade is an A!" << endl;
        cout << "Congratulations!" << endl;
        }
    else if (number_grade >= 80){
        cout << "Your letter grade is an B." << endl;
        }
    else if (number_grade >= 70){
        cout << "Your letter grade is an C." << endl;
        }
    else if (number_grade >= 60){
        cout << "Your letter grade is an D." << endl;
        }
    else if (number_grade < 60){
        cout << "Your letter grade is an F." << endl;
        }

    return 0;
}
