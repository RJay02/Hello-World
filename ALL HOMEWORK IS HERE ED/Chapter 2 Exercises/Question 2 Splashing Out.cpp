#include <iostream> //Pre-processor directive to include the iostream file for inputs and outputs
using namespace std; // Declares the use of standard namespace

int main() { //Main function 
    double starting_money; //Declaring the initial variables as double because you can have extra pence example £50.75
    //Prompt in to ask the user about the starting money
    cout << "How much money do you have:£"; 
    cin >> starting_money;
    //If statement to check if the user has enough money
    if (starting_money >= 25) {
        cout << "You can buy the game." << endl; //output statement if the user has enough money
        double money_left = starting_money - 25; //calculating money left after purchasing the game
        cout << "You have £" << money_left << " remaining" << endl; //Output statement for the money remaining 
    }
    else { //else statement if the user does not have enough money 
        double money_Needed = 25 - starting_money; // calculating how much money needs to be saved in order to buy the game 
        cout << "I need to save £" << money_Needed << endl; //output statement showing how much money needs to be saved
    }
    return 0; //Return statement
}