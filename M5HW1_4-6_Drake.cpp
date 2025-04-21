// CSC-134
// M5HW1 - Gold - Questions 4 - 6
// Aaron Drake
// 20 Apr 2025

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

#include <ctime>
using namespace std;

void main_menu();
void choice_circle();
void choice_rectangle();
void choice_triangle();
void choice_distance_traveled();

int main(){
    cout << "M5HW1 - Questions 4 - 6" << endl;
    main_menu();
    cout << "" << endl;
    cout << "" << endl;
    cout << "Thanks for using this program. I hope this was useful." << endl;
    return 0;
}

void main_menu(){
    cout << "Main Menu" << endl;
    cout << "What would you like to calculate: " << endl;
    cout << "1. The Area of a Circle." << endl;
    cout << "2. The Area of a Rectangle" << endl;
    cout << "3. The Area of a Triangle" << endl;
    cout << "4. Distance Traveled" << endl;
    cout << "Choice: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
    choice_circle();
  } else if (2 == choice) {
    choice_rectangle();
  } else if (3 == choice) {
    choice_triangle();
  } else if (4 == choice) {
    choice_distance_traveled();
    return;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    main_menu();
  }
}

void choice_circle(){
    double radius;
    double area_circle;
    cout << "To calculate the area of the circle, please enter the radius length in inches: " << endl;
    cin >> radius;
    area_circle = radius * radius * 3.14159;
    cout << fixed << setprecision(2);
    cout << "The area of the circle is: " << area_circle << " square inches." << endl;
}

void choice_rectangle(){
    double length;
    double width;
    double area_rectangle;
    cout << "To calculate the area of the rectangle, please enter the length in inches: " << endl;
    cin >> length;
    cout << "Please enter the width in inches: " << endl;
    cin >> width;
    area_rectangle = length * width;
    cout << fixed << setprecision(2);
    cout << "The area of the rectangle is: " << area_rectangle << " square inches." << endl;
}

void choice_triangle(){
    double base;
    double height;
    double area_triangle;
    cout << "To calculate the area of the triangle, please enter the width of the base in inches: " << endl;
    cin >> base;
    cout << "Please enter the height in inches: " << endl;
    cin >> height;
    area_triangle = 0.5 * base * height;
    cout << fixed << setprecision(2);
    cout << "The area of the triangle is: " << area_triangle << " square inches." << endl;
}

void choice_distance_traveled(){
    int time, speed;

    cout << "What is the speed of the vehicle in miles per hour?" << endl;
    cin >> speed;
    if (0 >= speed){
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_distance_traveled();
  }
    cout << "How many hours as it traveled?" << endl;
    cin >> time;
    if (0 >= time){
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_distance_traveled();
  }
    cout << " " << endl;
    cout << "Hours:        Miles Traveled:" << endl;
    for (int i=1; i<= time; i++){
        cout << i << "             " << speed * i << endl;
    }
}
