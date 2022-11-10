#include <iostream>  //Pre-processor directive to include the iostream file for inputs and outputs
#include <string> //Used when variable has a string
using namespace std; //Declares the use of standard namespace

int main() {//The main function
    //consts are variables whose value cannot be modified later
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    // declare integers length, width, and height
    int length;
    int width;
    int height;
    // declare double totalSqFt;
    double totalSqFt;
    // declare double paintNeeded;
    double paintNeeded;

    // prompt for and read in the length of the room
    cout << "Enter the length of the room in feet:";
    cin >> length;
    // prompt for and read in the width of the room
    cout << "Enter the width of the room in feet:";
    cin >> width;
    // prompt for and read in the height of the room
    cout << "Enter the height of the room in feet:";
    cin >> height;

    // Compute the total square feet to be painted
    totalSqFt = 2 * (length * width + length * height + width * height); //Equation used to calculate the surface area
    // Compute the amount of paint needed
    paintNeeded = totalSqFt / COVERAGE;

    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required
    cout << "The length of the room is " << length << "ft, the width is " << width << "ft and the height is " << height << "ft" << endl;
    cout << "The total surface area of the room is " << totalSqFt << " square feet and " << paintNeeded << " gallons of paint will be needed to paint the room." << endl;

    //Declaring constants and variables for the next problem
    const int doorSize = 20;
    const int windowSize = 15;
    int doorCount;
    int windowCount;

    //Prompt in and ask the user about the number of doors and windows
    cout << "Enter the number of doors in the room:";
    cin >> doorCount;
    cout << "Enter the number of windows in the room:";
    cin >> windowCount;

    //Calculations to find the area covered by the doors and the windows
    double doorArea = doorCount * doorSize;
    double windowArea = windowCount * windowSize;

    //Calculating the new total surface area to be painted not including the doors and the windows
    double newArea = totalSqFt - (doorArea + windowArea);

    //Output statement describing the new surface area
    cout << "The total area covered by doors is " << doorArea << "sq ft and area covered by the windows is " << windowArea << "sq ft which means that the new total area that needs to be painted is " << newArea << "sq ft" << endl;

    //Declaring variables and calculating the new amount of paint required
    double newPaintNeeded = newArea / COVERAGE;
    //Output statement describing the amount of paint required 
    cout << "Paint (in gallons) needed now to cover the room not including the doors and windows is " << newPaintNeeded << endl;

    return 0;//Return Statement

}