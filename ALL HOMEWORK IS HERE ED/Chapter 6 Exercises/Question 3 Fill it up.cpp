#include <iostream>// Pre-processor directive to include the iostream file for inputs and outputs
using namespace std;// Declares the use of standard namespace

int main() {//Main function 
    int array[11];// Declaring the array that can store up to 10 values
    for (int i = 1; i < 11; i++) { // For loop to allow the user to enter the different values
        cout << "Enter value " << i << " please:"; //Output statement to enter value
        cin >> array[i]; //Prompt in to ask for values
    }
    for (int i = 1; i < 11; i++) { //For loop to print the entered values  
        cout << array[i] << endl; //Outputting the enetered values in the array 
    }
    return 0; //Return statement
}