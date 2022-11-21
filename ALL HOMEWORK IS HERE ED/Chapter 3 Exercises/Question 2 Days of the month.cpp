#include <iostream> //Pre-processor directive to include the iostream file for inputs and outputs
using namespace std; //Used when a variable has a string 
int main() { //Main Function 
    int x;
    int i = 0;
    while (i == 0) {
        cout << "Please enter a number for you month:";
        cin >> x;
        switch (x) {
        case 1:
            cout << "January has 31 days" << endl;
            break;
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
        default:
            cout << "Invalid input please enter a number" << endl;
        }
    }
    return 0;//Return Statement 
}