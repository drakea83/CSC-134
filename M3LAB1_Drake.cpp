// CSC-134
// M3LAB1
// Aaron Drake
// 2 Mar 2025

#include <iostream>

using namespace std;
int main() {

  int choice;
  int choice_2;
  int choice_3;
  int choice_4;

  cout << "This is a combat simulation. You are a soldier in Iraq searching for the enemy." << endl;
  cout << "Choose what building to search." << endl;
  cout << "Do you choose building 1 or building 2?" << endl;
  cout << "Type 1 or 2: ";
  cin >> choice;

  if (1 == choice) {
  	cout << "You chose building 1" << endl;
  	cout << "You find 3 enemy soldiers. Do you fight or run?" << endl;
  	cout << "Type 7 to fight the soldiers or type 8 to run away." << endl;
  	cin >> choice_2;

  	if (7 == choice_2){
        cout << "You fight 3 soldiers single-handly. Your courage overcomes the odds. Victory is yours!" << endl;
  	}
  	if (8 == choice_2) {
        cout << "You flee from the building. The enemy soldiers pursue you. You are defeated." << endl;
  	}
  }
  if (2 == choice) {
  	cout << "You chose building 2" << endl;
  	cout << "After a thorough search, the building is empty." << endl;
  	cout << "Do you hold your position and secure building 2 or do you search building 1?" << endl;
  	cout << "Type 3 to hold your position or type 4 to search building 1." << endl;
  	cin >> choice_3;

  	if (3 == choice_3) {
        cout << "You secure the building and radio for reinforcements to assist you." << endl;
        cout << "Reinforcements take fire from building 1 and sustain 1 friendly seriously wounded." << endl;
  	}
  	if (4 == choice_3) {
        cout << "You move to building 1 and open the door." << endl;
        cout << "You find 3 enemy soldiers. Do you fight or run?" << endl;
  	cout << "Type 7 to fight the soldiers or type 8 to run away." << endl;
  	cin >> choice_2;

  	if (7 == choice_2){
        cout << "You fight 3 soldiers single-handly. Your courage overcomes the odds. Victory is yours!" << endl;
  	}
  	if (8 == choice_2) {
        cout << "You flee from the building. The enemy soldiers pursue you. You are defeated." << endl;
  	}
  	}
  }

  cout << "Thanks for playing!" << endl;

  return 0;
}
