// CSC-134
// M2HW1 - Gold
// Question 2
// Aaron Drake 
// 25 Feb 2025

# include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double cost_per_cubic_foot = 0.3;
    const double charge_per_cubic_foot = 0.52;

    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    cout << "Enter the dimensions of the crate (in feet):/n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    volume = length * width * height;
    cost = volume * cost_per_cubic_foot;
    charge = volume * charge_per_cubic_foot;
    profit = cost - charge;
    cout << fixed << setprecision(2);

    cout << "The volume of the crate is ";
    cout << volume << " cubic feet./n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << abs(profit) << endl;
    return 0;
}