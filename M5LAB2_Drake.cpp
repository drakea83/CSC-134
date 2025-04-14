// CSC-134
// M5LAB2
// Aaron Drake
// 13 Apr 2025

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
void getLenght();
void getWidth();
void getArea();
void displayData();

int main(){
    cout << "This program will calculate the area of a rectangle," << endl;
    cout << "based on your inputs for the length and width." << endl;
    
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area

   // Get the rectangle's length.
void getLenght(){
    cout << "Please enter the length of the rectangle." << endl;
    cout << "Length: " << endl;
    cin >> length;
   length = getLength();
}

void getWidth(){
    cout << "Please enter the width of the rectangle." << endl;
    cout << "Width: " << endl;
    cin >> width;
   width = getWidth();
}

void getArea(){
    area = getLength * getWidth;
   area = getArea();
}

void displayData(){
   displayData(length, width, area);
   cout << "The length of the rectangle is " << getLength << "." << endl;
   cout << "The width of the rectangle is " << getWidth << "." << endl;
   cout << "The area of the rectangle is " << getArea << "." << endl;
 }
   return 0;
}
