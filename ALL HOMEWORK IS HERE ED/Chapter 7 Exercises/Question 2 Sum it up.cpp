#include <iostream>// Pre-processor directive to include the iostream file for inputs and outputs
using namespace std;// Declares the use of standard namespace

int sum(int num1, int num2, int num3) { //Function Definition 
    int add = num1 + num2 + num3;//Adding the given integers by the user 
    cout << "The total of the three numbers is " << add << endl;//Output statement 
}

int main() { //Main function 
    int num1, num2, num3;//Declaring the variables 
    //Prompt in to ask the user for the numbers 
    cout << "Enter the 1st number:";
    cin >> num1;
    cout << "Enter the 2nd number:";
    cin >> num2;
    cout << "Enter the 3rd number:";
    cin >> num3;
    sum(num1, num2, num3);//Function Call 
}