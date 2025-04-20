// CSC-134
// M5HW1 - Gold (Questions 1 - 3)
// Aaron Drake
// 20 Apr 2025

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;
void length();
void width();
void height();
void volume();

int main(){
// Question 1
string month_1;
string month_2;
string month_3;
double rainfall_month_1;
double rainfall_month_2;
double rainfall_month_3;
double average_rainfall;

    cout << "Question 1: Create a program to average three months of rainfall" << endl;
    cout << "" << endl;
    cout << "This program calculates the average rainfall for a three month period based on user inputs." << endl;
    cout << "" << endl;
    cout << "Enter month 1: " << endl;
    cin >> month_1;
    cout << "Enter the total rainfall for month 1 in inches: " << endl;
    cin >> rainfall_month_1;
    cout << "Enter month 2: " << endl;
    cin >> month_2;
    cout << "Enter the total rainfall for month 2 in inches: " << endl;
    cin >> rainfall_month_2;
    cout << "Enter month 3: " << endl;
    cin >> month_3;
    cout << "Enter the total rainfall for month 3 in inches: " << endl;
    cin >> rainfall_month_3;
    cout << "" << endl;
    average_rainfall = rainfall_month_1 / 3 + rainfall_month_2 / 3 + rainfall_month_3 / 3;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month_1 << ", " << month_2 << " and " << month_3 << " was " << average_rainfall << " inches." << endl;
    cout << "" << endl;
    cout << "" << endl;

// Question 2
double block_length;
double block_width;
double block_height;
double block_volume;

    cout << "Question 2: Create a program to calculate the volume of a block." << endl;
    cout << "" << endl;
    cout << "This program calculates the volume of a rectangular block." << endl;

    void length();
    cout << "Enter the length of the block in inches: " << endl;
    cin >> block_length;
    if (block_length <= 0) {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    void length();
    }
    else if (block_length > 0){
    void width();
    }

    void width();
    cout << "Enter the width of the block in inches: " << endl;
    cin >> block_width;
    if (block_width <= 0) {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    void width();
    }
    else if (block_width > 0){
    void height();
    }

    void height();
    cout << "Enter the height of the block in inches: " << endl;
    cin >> block_height;
    if (block_height <= 0) {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    void height();
    }
    else if (block_height > 0){
    void volume();
    }

    void volume();
    cout << "" << endl;
    block_volume = block_length * block_width * block_height;
    cout << fixed << setprecision(2);
    if (block_volume == 0){
        cout << "Your inputs must be greater than zero. Please try again." << endl;
    }
    else {
    cout << "The volume of the block is " << block_volume << " cubic inches." << endl;
    }
    cout << "" << endl;
    cout << "" << endl;

// Question 3
    cout << "Question 3: Create a program that displays the Roman numeral for a user input (1-10)." << endl;
int user_choice;

    cout << "" << endl;
    cout << "This program converts a number into a Roman numeral." << endl;
    cout << "Please enter a number (1-10): ";
    cin >> user_choice;
    if (user_choice == 1){
        cout << "The Roman Numeral for 1 is I." << endl;
    }
    else if (user_choice == 2){
        cout << "The Roman Numeral for 2 is II." << endl;
    }
    else if (user_choice == 3){
        cout << "The Roman Numeral for 3 is III." << endl;
    }
    else if (user_choice == 4){
        cout << "The Roman Numeral for 4 is IV." << endl;
    }
    else if (user_choice == 5){
        cout << "The Roman Numeral for 5 is V." << endl;
    }
    else if (user_choice == 6){
        cout << "The Roman Numeral for 6 is VI." << endl;
    }
    else if (user_choice == 7){
        cout << "The Roman Numeral for 7 is VII." << endl;
    }
    else if (user_choice == 8){
        cout << "The Roman Numeral for 8 is VIII." << endl;
    }
    else if (user_choice == 9){
        cout << "The Roman Numeral for 9 is IX." << endl;
    }
    else if (user_choice == 10){
        cout << "The Roman Numeral for 10 is X." << endl;
    }
    else {
        cout << "That is not a valid input. Please try again." << endl;
    }
    cout << "" << endl;
    cout << "" << endl;
}
