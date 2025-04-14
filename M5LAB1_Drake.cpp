// CSC-134
// M5LAB1
// Aaron Drake
// 13 Apr 2025

#include <iostream>
using namespace std;

void main_menu();
void choice_global_thermonuclear_war();
void choice_USA();
void choice_USSR();
void choice_target_group_USSR();
void choice_target_group_USA();
void choice_target_group_Eastern_Europe();
void choice_target_group_Western_Europe();
void choice_target_group_USSR_results();
void choice_target_group_USA_results();
void choice_target_group_Eastern_Europe_results();
void choice_target_group_Western_Europe_results();
void choice_abort();

int main(){
    cout << "M5LAB1: Choose Your Own Adventure: WARGAMES" << endl;
    main_menu();
    cout << "" << endl;
    cout << "" << endl;
    cout << "Thanks for playing. I hope you enjoyed the game." << endl;
    return 0;
}

void main_menu(){
    cout << "Main Menu" << endl;
    cout << "Would you like to play a game?" << endl;
    cout << "What would you like to play: " << endl;
    cout << "1. Let's play Global Thermonuclear War." << endl;
    cout << "2. [Quit]" << endl;
    cout << "Choice: " << endl;
    int choice;
    cin >> choice;
     if (1 == choice) {
    choice_global_thermonuclear_war();
  } else if (2 == choice) {
    cout << "Ok, quitting game" << endl;
    return;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    main_menu();
  }
}

void choice_global_thermonuclear_war() {
  cout << "Choose your side" << endl;
  cout << "1. United States of America" << endl;
  cout << "2. Union of Soviet Socialist Republics" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_USA();
  } else if (2 == choice) {
    choice_USSR();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_global_thermonuclear_war();
}
}

void choice_USA(){
    cout << "Select Target Group" << endl;
    cout << "1. USSR" << endl;
    cout << "2. Eastern Europe" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
    choice_target_group_USSR();
  } else if (2 == choice) {
    choice_target_group_Eastern_Europe();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_USA();
}
}

void choice_USSR(){
    cout << "Select Target Group" << endl;
    cout << "1. USA" << endl;
    cout << "2. Western Europe" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
    choice_target_group_USA();
  } else if (2 == choice) {
    choice_target_group_Western_Europe();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_USSR();
}
}

void choice_target_group_USSR(){
    cout << "Final Attack Concurrence" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Abort" << endl;
    int choice;
    cout << "Choose: " << endl;
    cin >> choice;
    if (1 == choice) {
    choice_target_group_USSR_results();
  } else if (2 == choice) {
    choice_abort();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_target_group_USSR();
}
}

void choice_target_group_USA(){
    cout << "Final Attack Concurrence" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Abort" << endl;
    int choice;
    cout << "Choose: " << endl;
    cin >> choice;
    if (1 == choice) {
    choice_target_group_USA_results();
  } else if (2 == choice) {
    choice_abort();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_target_group_USA();
}
}

void choice_target_group_Eastern_Europe(){
    cout << "Final Attack Concurrence" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Abort" << endl;
    int choice;
    cout << "Choose: " << endl;
    cin >> choice;
    if (1 == choice) {
    choice_target_group_Eastern_Europe_results();
  } else if (2 == choice) {
    choice_abort();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_target_group_Eastern_Europe();
}
}

void choice_target_group_Western_Europe(){
    cout << "Final Attack Concurrence" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Abort" << endl;
    int choice;
    cout << "Choose: " << endl;
    cin >> choice;
    if (1 == choice) {
    choice_target_group_Western_Europe_results();
  } else if (2 == choice) {
    choice_abort();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_target_group_Western_Europe();
}
}

void choice_target_group_USSR_results(){
    cout << "Attack results:" << endl;
    cout << "Soviet Early Warning Systems detected our attack. USSR Premier ordered an immediate counterattack." << endl;
    cout << "Estimated casualties: " << endl;
    cout << "USA: 134 Million" << endl;
    cout << "USSR: 140 Million" << endl;
    cout << "Perhaps the best way to win is not to play." << endl;
    cout << "" << endl;
    cout << "How about a nice game of chess?" << endl;
}

void choice_target_group_USA_results(){
    cout << "Attack results:" << endl;
    cout << "American Early Warning Systems detected our attack. US President ordered an immediate counterattack." << endl;
    cout << "Estimated casualties: " << endl;
    cout << "USA: 134 Million" << endl;
    cout << "USSR: 140 Million" << endl;
    cout << "Perhaps the best way to win is not to play." << endl;
    cout << "" << endl;
    cout << "How about a nice game of chess?" << endl;
}

void choice_target_group_Eastern_Europe_results(){
    cout << "Attack results:" << endl;
    cout << "Soviet Early Warning Systems detected our attack. USSR Premier ordered an immediate counterattack." << endl;
    cout << "Estimated casualties: " << endl;
    cout << "USA: 134 Million" << endl;
    cout << "Western Europe: 60 Million" << endl;
    cout << "USSR: 140 Million" << endl;
    cout << "Eastern Europe: 50 Million" << endl;
    cout << "Perhaps the best way to win is not to play." << endl;
    cout << "" << endl;
    cout << "How about a nice game of chess?" << endl;
}

void choice_target_group_Western_Europe_results(){
    cout << "Attack results:" << endl;
    cout << "NATO Early Warning Systems detected our attack. US President ordered an immediate counterattack." << endl;
    cout << "Estimated casualties: " << endl;
    cout << "USA: 134 Million" << endl;
    cout << "Western Europe: 60 Million" << endl;
    cout << "USSR: 140 Million" << endl;
    cout << "Eastern Europe: 50 Million" << endl;
    cout << "Perhaps the best way to win is not to play." << endl;
    cout << "" << endl;
    cout << "How about a nice game of chess?" << endl;
}

void choice_abort(){
    cout << "You aborted the attack." << endl;
    cout << "That was the best choice. Global Thermonuclear War has no winners." << endl;
    cout << "" << endl;
    cout << "How about a nice game of chess?" << endl;
}
