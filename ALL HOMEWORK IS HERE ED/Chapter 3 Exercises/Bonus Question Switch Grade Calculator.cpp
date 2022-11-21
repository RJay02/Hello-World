#include <iostream> //Pre-processor directive to include the iostream file for inputs and outputs
using namespace std; //Used when a variable has a string 
int main() { //Main Function 
    int mark;
    string name;
    int i = 0;
    while (i == 0) {
        cout << "Please enter student's full name:";
        cin >> name;
        cout << "Please enter student's mark:";
        cin >> mark;

        if (mark <= 40) {
            mark = 1;
        }
        else if (mark > 41) {
            mark = 2;
        }
        else if (mark > 51) {
            mark = 3;
        }
        else if (mark > 61) {
            mark = 4;
        }
        else if (mark > 71) {
            mark = 5;
        }
        else {
            mark = 6;
        }
        switch (mark) {
        case 1:
            cout << name << " has got a F" << endl;
            break;
        case 2:
            cout << name << " has got an E" << endl;
            break;
        case 3:
            cout << name << " has got an D" << endl;
            break;
        case 4:
            cout << name << " has got a C" << endl;
            break;
        case 5:
            cout << name << " has got a B" << endl;
            break;
        case 6:
            cout << name << " has got an A" << endl;
            break;
        default:
            cout << "Enter the values correctly" << endl;
        }
    }

    return 0;//Return Statement 
}