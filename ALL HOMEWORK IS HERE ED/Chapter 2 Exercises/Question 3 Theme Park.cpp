#include <iostream> //Pre-processor directive to include the iostream file for inputs and outputs
using namespace std;// Declares the use of standard namespace

int main() { //The main function 
    //Declaring the variables used
    int age; 
    float height;
    //Prompt in to ask the user about the age and height
    cout << "Please enter the age:";
    cin >> age;
    cout << "Please enter the height:";
    cin >> height;
    //Using a compound condition to confirm if the person is older than or equal to 5 and taller than 0.6m 
    if (age >= 5 && height > 0.6) {
        cout << "Can ride" << endl;//Output "can ride" message
    }
    else { //If the user is not tall or old enough
        cout << "Cannot ride" << endl; //Output "cannot ride" message
    }
    return 0;//Return statement
}