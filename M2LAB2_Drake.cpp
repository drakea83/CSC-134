// Aaron Drake
// M2LAB2
// CSC-134
// 16 February 2025

// I used ChatGPT to write a simple C++ Program to calculate the dimensions of a tractor-trailer.

# include <iostream> 
using namespace std;

int main() {
    double length, width, height;
    
    // Ask user for the dimensions of the tractor-trailer
    cout << "Enter the length of the trailer (in meters): ";
    cin >> length;
    
    cout << "Enter the width of the trailer (in meters): ";
    cin >> width;
    
    cout << "Enter the height of the trailer (in meters): ";
    cin >> height;
    
    // Calculate the volume of the trailer
    double volume = length * width * height;
    
    // Display the results
    cout << "The total volume of the tractor-trailer is " << volume << " cubic meters." << endl;
    
    return 0;
}
