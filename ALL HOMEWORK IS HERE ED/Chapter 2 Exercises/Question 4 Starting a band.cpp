#include <iostream> //Pre-processor directive to include the iostream file for inputs and outputs
#include <string> // Used when variable has a string
using namespace std; //Declares the use of standard namespace

int main() { //Main function 
    //Declaring variables needed
    bool musicalFriend = true;
    string friendPlays = "guitar";
    //Checking if the user has a musical friend 
    if (musicalFriend == true) {
        //Logical OR Checking if the friend plays guitar or drums
        if ((friendPlays == "guitar") || (friendPlays == "drums")) {
            cout << "You can start a band" << endl; //Output statement if both the conditions are met 
        }
        else { //Contradicting else condition if the friend does not play guitar or drums
            cout << "You cannot start a band" << endl; //Output statement if the second condition is not met
        }

    }
    else {//Contradicting else statement if the friend if not a musician
        cout << "You cannot start a band" << endl; //Output statement if the first condition is not met
    }
    return 0;// Return Statement
}