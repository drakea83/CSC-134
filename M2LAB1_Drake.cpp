// CSC-134
// M2LAB1
// Aaron Drake
// 16 Feb 2025

# include <iostream>
using namespace std;

int main() {
    const double cost_per_cubic_foot = 0.23;
    const double charge_per_cubic_foot = 0.5;

    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

   // cout << setprecision(2) << fixed << showpoint;

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

    cout << "The volume of the crate is ";
    cout << volume << " cubic feet./n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << abs(profit) << endl;
    return 0;
}
