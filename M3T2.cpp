// CSC-134
// M3T2
// Aaron Drake
// 2 Mar 2025

# include <iostream>
using namespace std;

int main() {
    double length_1;
    double height_1;
    double area_1;
    double length_2;
    double height_2;
    double area_2;
    double total_area;

    cout << "Enter the dimensions of the rectangle 1 (in feet): ";
    cout << "Length: ";
    cin >> length_1;
    cout << "Height: ";
    cin >> height_1;
    cout << "Enter the dimensions of the rectangle 2 (in feet): ";
    cout << "Length: ";
    cin >> length_2;
    cout << "Height: ";
    cin >> height_2;

    area_1 = length_1 * height_1;
    area_2 = length_2 * height_2;
    total_area = area_1 + area_2;

    cout << "The area of rectangle 1 is ";
    cout << area_1 << " square feet." << endl;
    cout << "The area of rectangle 2 is ";
    cout << area_2 << " square feet." << endl;
    cout << "The total area of both rectangles is ";
    cout << total_area << " square feet." << endl;

    if (area_1 > area_2){
        cout << "Rectangle 1 is larger" << endl;
        }
    if (area_1 < area_2){
        cout << "Rectangle 2 is larger" << endl;
        }
    if (area_1 == area_2){
        cout << "Both rectangles are the same size" << endl;
    }
    return 0;
}
