#include <iostream> //Pre-processor directive to include the iostream file for inputs and outputs
using namespace std;// Declares the use of standard namespace

int main() { //The main function 
    int age = 19; //declare and initialise age variable
    if (age >= 18) { //check if age is greater than or equal to 18
        cout << "Can vote" << endl; //output can vote message
    }
    else { //age must be less that 18
        cout << "Cannot vote" << endl; //output can vote message
    }
    return 0; //return statement 
}
