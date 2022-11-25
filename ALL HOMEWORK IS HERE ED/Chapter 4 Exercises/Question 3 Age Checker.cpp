#include <iostream>
using namespace std;

int main() {//Main function
    //Prompt in to ask the user about their age
    cout << "Enter your age:";
    //Declaring variables 
    int age;
    cin >> age;
    //While loop if the age entered is not valid
    while (cin.fail()) {
        cout << "Invalid input" << endl;//output statement if the enetered age is incorrect 
        cin.clear(); //clear bad input flag
        cin.ignore(1000, '\n'); //ignore input
        cout << "Enter a valid age:";
        cin >> age; //get new age
    }
    cout << "The entered age is:" << age << endl;//Output statement showing the age entered 

    return 0;//Return statement
}