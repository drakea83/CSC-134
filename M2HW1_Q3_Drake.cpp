// CSC-134
// M2HW1 - Gold
// Question 3
// Aaron Drake 
// 25 Feb 2025

# include <iostream>
using namespace std;

int main() {
    string name;
    int number_pizzas;
    double number_people;
    double slices_per_person = 3;
    int slices_per_pizza;
    
    cout << "How many pizzas did you order?" << endl;
    cin >> number_pizzas;
    cout << "How many slices are there in each pizza?" << endl;
    cin >> slices_per_pizza;
    cout << "How many people were invited to the party?" << endl;
    cin >> number_people;

    double total_number_slices = number_pizzas * slices_per_pizza;
    double number_pizza_slices_consumed = number_people * slices_per_person;
    double remaining_slices = total_number_slices - number_pizza_slices_consumed;
    double remaining_pizza = remaining_slices / slices_per_pizza;

    cout << "The total number of pizzas that will be left over is: " << remaining_pizza << " " << endl;
    cout << "The total number of pizza slices that will be left over is: " << remaining_slices << " " << endl;

    return 0;
}