#include <iostream>
using namespace std;

int main() { //Main function 
    while (true) { //While conditional check
        int num;//Declaring the variables
        cout << "Please enter a number other than 5:" << endl; //Prompt in to get a number
        cin >> num;
        if (num == 5) { // If statement to stop when the user enters 5 
            cout << "Hey! you weren't supposed to enter 5!" << endl; //Output statement if the user enters 5
            break;//Beaking the while loop 
        }
    }
}