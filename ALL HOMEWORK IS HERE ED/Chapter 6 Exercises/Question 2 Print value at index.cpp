#include <iostream>// Pre-processor directive to include the iostream file for inputs and outputs
using namespace std;// Declares the use of standard namespace

int main() { //Main Function 
    string vehicles[] = { "Car","Train","Tractor","Skiff","Tank" }; //Declaring the array  
    cout << vehicles[3] << endl; //Outputting the index 3 to console
    cout << vehicles[0] << endl; //Outputting the index 0 to console
    cout << vehicles[2] << " " << vehicles[4] << endl; //Outputting “Tractor Tank” to console using array indexes
    cout << vehicles[0] << " " << vehicles[3] << " " << vehicles[1] << endl; //Outputting “Car Skiff Train” to console using array indexes


    return 0; // Return Statement 
}
