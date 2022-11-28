#include <iostream>
using namespace std;

int main() { //Main function 
//Declaring variables
    int tables = 12, rows = 12;
    //Nested for loop being processed 12 times to produce tables up to 12 
    for (int i = 1; i <= tables; ++i) {
        //Output statement 
        cout << "---------------" << endl;
        cout << i << " Times table: " << endl;
        cout << "---------------" << endl;

        for (int j = 1; j <= rows; ++j) {
            //Output statement
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }

    return 0; //Return statement 
}