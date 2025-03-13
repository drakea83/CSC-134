// CSC-134
// M3HW1 - Gold
// Aaron Drake
// 9 Mar 2025

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
cout << "Question 1" << endl;
    string user_response;

    cout << "Hello, I'm a C++ ChatBot." << endl;
    cout << "Do you like me? Type yes or no." << endl;
    cin >> user_response;

    if (user_response == "yes"){
        cout << "Thank you so much. That means a lot to me." << endl;
    }
    if (user_response == "no"){
            cout << "I'm sorry you feel that way." << endl;
    }
        if (user_response != "yes" && user_response != "no"){
            cout << "I'm sorry, I don't understand. Can you please type yes or no?" << endl;
        }
    cout << "" << endl;
    cout << "" << endl;

cout << "Question 2" << endl;
    const double tip = 0.15;
    const double tax = 0.045;

    double meal_price;
    double dine_in_price;
    double take_out_price;
    double meal_tax;
    double meal_tip;
    int order_type;

    cout << "Enter the price of the meal: $";
    cin >> meal_price;
    cout << "Is this order dine in or to go? Type 1 for dine in and 2 for to go: ";
    cin >> order_type;
    cout << "" << endl;

    meal_tax = meal_price * tax;
    meal_tip = meal_price * tip;
    dine_in_price = meal_price + meal_tax + meal_tip;
    take_out_price = meal_price + meal_tax;
    cout << fixed << setprecision(2);

    if (order_type == 1){
        cout << "The price of your meal is: $" << meal_price << "." << endl;
        cout << "The tax is : $" << tax * meal_price << "." << endl;
        cout << "The 15% gratuity is : $" << tip * meal_price << "." << endl;
        cout << "The total price of your meal will be: $" << dine_in_price << "." << endl;
        cout << "Thank you for your order. Please come again soon." << endl;
    }
    if (order_type == 2){
        cout << "The price of your meal is: $" << meal_price << "." << endl;
        cout << "The tax is : $" << tax * meal_price << "." << endl;
        cout << "The total price of your meal will be: $" << take_out_price << "." << endl;
        cout << "Thank you for your order. Please come again soon." << endl;
    }
    cout << "" << endl;
    cout << "" << endl;

cout << "Question 3" << endl;

    int choice_1;
    int choice_2;
    int choice_3;

    cout << "Welcome to college! Here you will face a number of choices. Pick what is best for you." << endl;
    cout << "Your teacher assigns you homework that is due next week. Do you finish it right away or wait until later?" << endl;
    cout << "Type 1 to do it right away or 2 to work on it later." << endl;
    cin >> choice_1;

  if (1 == choice_1) {
  	cout << "While working on the homework, you struggle with a portion of it." << endl;
  	cout << "Because you started early, you can meet your professor during office hours before the assignment is due." << endl;
  	cout << "Do you meet with your professor or do you attempt to figure out the homework on your own?" << endl;
    cout << "Type 1 to meet with your professor or type 2 to figure it out yourself." << endl;
  	cin >> choice_2;

  	if (1 == choice_2){
        cout << "You meet with your professor during office hours. He explains the difficult section." << endl;
        cout << "After the meeting, you are able to finish your homework early." << endl;
        cout << "GAME OVER! Congratulations, you made good choices." << endl;
  	}
  	if (2 == choice_2) {
        cout << "You decide to figure it out yourself because you have several days before it is due." << endl;
        cout << "After several hours unsuccessfully attempting the difficult portion, you miss the opportunity to meet with your professor." << endl;
        cout << "Do you attempt to meet with other classmates to see if anyone else has figured out the assignment?" << endl;
        cout << "Type 1 to meet with your classmates or type 2 to keep working on it by yourself." << endl;
        cin >> choice_3;

    if (choice_2 != 1 && choice_2 != 2){
        cout << "Error. Please type 1 or 2 to make your choice." << endl;
    }

    if (1 == choice_3){
        cout << "You reach out to a couple of your classmates and together you decide to form a study group." << endl;
        cout << "You meet the next day to discuss the homework. Together, you figure out the difficult section." << endl;
        cout << "With your homework finished, you can enjoy the weekend." << endl;
        cout << "GAME OVER! Congratulations, you made good choices." << endl;
    }
    if (2 == choice_3){
        cout << "You struggle throughout the weekend to figure out the difficult section on your own." << endl;
        cout << "Finally, you solve the problem and finish the homework." << endl;
        cout << "In the future, you resolve not to be so hardheaded and get help early on." << endl;
        cout << "GAME OVER! Not the best choices but you were able to complete the assignment." << endl;
    }
    if (choice_3 != 1 && choice_3 != 2){
        cout << "Error. Please type 1 or 2 to make your choice." << endl;
    }
  	}
  }

  if (2 == choice_1){
    cout << "Time flies by. Next thing you know, the homework is due the next day." << endl;
    cout << "As you work on the assignment, you struggle with a portion of it." << endl;
    cout << "Do you attempt to meet with other classmates to see if anyone else has figured out the assignment?" << endl;
    cout << "Type 1 to meet with your classmates or type 2 to keep working on it by yourself." << endl;
    cin >> choice_3;

    if (1 == choice_3) {
        cout << "You reach out to a couple of your classmates and begrudgingly, they agree to help you." << endl;
        cout << "They walk you through the difficult section." << endl;
        cout << "While your homework is completed, your classmates are upset with you." << endl;
        cout << "GAME OVER! Not the best choices but you were able to complete the assignment." << endl;
    }
    if (2 == choice_3) {
        cout << "You struggle to figure out the difficult section on your own." << endl;
        cout << "Unfortunately, you run out of time. You had to turn-in the incomplete homework." << endl;
        cout << "You receive a poor grade which knocks down your class average severely." << endl;
        cout << "In the future, you resolve make better use of your time." << endl;
        cout << "GAME OVER! Make better choices next time." << endl;
    }
    if (choice_3 != 1 && choice_3 != 2){
        cout << "Error. Please type 1 or 2 to make your choice." << endl;
    }
  }
    if (choice_1 != 1 && choice_1 != 2){
        cout << "Error. Please type 1 or 2 to make your choice." << endl;
    }

    cout << "" << endl;
    cout << "" << endl;

cout << "Question 4" << endl;

    int seed = time(0);
    srand(seed); // srand doesn't seem to be populating with the <cmath> in Code::Spaces
    const int MAX = 9;
    int answer;
    int correct_answer;
    int roll = rand() % MAX; // rand doesn't seem to be populating either
    int roll_1 = rand() % MAX;
    int roll_2 = rand() % MAX;

    cout << "What is " << roll_1 << "+" << roll_2 << "= ?" << endl;
    cin >> answer;
    correct_answer = roll_1 + roll_2;
    if (answer == correct_answer){
        cout << "Correct" << endl;
    }
    if (answer != correct_answer);{
        cout << "Incorrect" << endl;
    }
    

    return 0;
}
