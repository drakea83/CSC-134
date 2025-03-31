// CSC-134
// M4LAB1
// Aaron Drake
// 23 Mar 2025

#include <iostream>

using namespace std;

int main()
{
    int width;
    int height;

    cout << "What is the width of the block?" << endl;
    cin >> width;
    cout << "What is the height of the block?" << endl;
    cin >> height;

for (int i=0; i < height; i++) {
        for (int j=0; j < width; j++) {
            cout << "*" << " ";
        }
    cout << endl;
}
    return 0;
}
