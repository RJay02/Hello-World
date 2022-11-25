#include <iostream>
using namespace std;

int main() {//Main function
    for (int i = 0; i < 7; i++) { //Iterate through outer loop 7 times to get 7 stars column  
        for (int j = 0; j < 7; j++) {//Iterate through inner loop 7 times for every iteration of outerloop
            cout << "\*";//Printing *
        }
        cout << endl; //Print a new line after iterating through the loop 7 times 
    }

}