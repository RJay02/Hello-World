#include <iostream> //Pre-processor directive to include the iostream file for inputs and outputs
using namespace std; //Used when a variable has a string 
int main() { //Main Function 
    //Initialising the variables 
    int x;
    int i = 0;
    while (i == 0) { //while loop to keep on repeating the question
        cout << "Please enter a number for you month:";//Prompt in and ask the user about the month 
        cin >> x;
        switch (x) { //Using switch statement describing all the cases 
            // Different cases for each month of the year 
        case 1:
            cout << "January has 31 days" << endl;//Output statement
            break;//Break statement 
        case 2:
            cout << "Febuary has 28 days" << endl;
            break;
        case 3:
            cout << "March has 31 days" << endl;
            break;
        case 4:
            cout << "April has 30 days" << endl;
            break;
        case 5:
            cout << "May has 31 days" << endl;
            break;
        case 6:
            cout << "June has 30 days" << endl;
            break;
        case 7:
            cout << "July has 31 days" << endl;
            break;
        case 8:
            cout << "August has 31 days" << endl;
            break;
        case 9:
            cout << "September has 30 days" << endl;
            break;
        case 10:
            cout << "October has 31 days" << endl;
            break;
        case 11:
            cout << "November has 30 days" << endl;
            break;
        case 12:
            cout << "December has 31 days" << endl;
            break;
        default: // Justifying the default case 
            cout << "Invalid input please enter a number" << endl;
        }
    }
    return 0;//Return Statement 
}