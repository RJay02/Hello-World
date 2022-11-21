#include <iostream> //Pre-processor directive to include the iostream file for inputs and outputs
using namespace std; //Used when a variable has a string 
int main() { //Main Function 
    cout << "Would you like to continue? (Y/N): "; //ask for input
    char userInput; //variable for user answer;
    cin >> userInput;//get user input

    switch (userInput) { //evaluate expression
    case 'Y': //case for Y
        cout << "Continue" << endl; //cout message if user enters Y
        break; //break to end case
    case 'N': //case for N
        cout << "Quit" << endl; //cout message if user enters N
        break;//Used to show where a case ends
    default: //default case
        cout << "That input was not recognised" << endl; //default message if neither Y or N entered
    }
    return 0;//Return Statement 
}