#include <iostream>// Pre-processor directive to include the iostream file for inputs and outputs
using namespace std;// Declares the use of standard namespace

int main() {//Main function 
    char characters[26];//Declaring array of characters with 26 elements 
    int integers[10];//Declaring array of integers with 10 elements 
    string strings[4];//Declaring array of strings with 4 elemets 
    float decimal[18];//Declaring array of deciaml numbers with 18 elements 

    int numbers[7];//Declaring arary of integers
    //Initialising all the integers 
    numbers[1] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;
    numbers[5] = 6;
    numbers[6] = 7;
    numbers[7] = 8;
    cout << numbers[7] << endl;//Outputing the value at index 7 to check the code is functioning properly 

    string words[1];//Declaring the array of strings 
    //Initialising the strings 
    words[0] = "Hello";
    words[1] = "Bye";
    cout << words[1] << endl;//Outputing random value to check the code is functioning properly 

    char letters[2];//Declaring array of characters 
    //Initialising the characters 
    letters[0] = 'A';
    letters[1] = 'B';
    letters[2] = 'C';
    cout << letters[2] << endl;//Outputing random value to check the code is functioning properly 

    float decimals[4];//Declaring array of decimals  
    //Initialising the decimals 
    decimals[0] = 1.0;
    decimals[1] = 2.0;
    decimals[2] = 3.0;
    decimals[3] = 4.0;
    decimals[4] = 5.0;
    cout << decimals[2] << endl;//Outputing random value to check the code is functioning properly 


    int values[5];//Declaring array of given integers 
    //Initialising the integers  
    values[0] = 10;
    values[1] = 20;
    values[2] = 30;
    values[3] = 40;
    values[4] = 50;
    values[5] = 60;
    cout << values[2] << endl;//Outputing random value to check the code is functioning properly 

    //Declaring all the asked arrays 
    string x[] = { "","a","aa","aaa" };
    int y[] = { 1,10,100,1000,10000 };
    bool z[] = { true,false,false,true };
    float r[] = { 5.6,1.8,4.34,7.65 };

    //Outputing random value to check the code is functioning properly 
    cout << x[2] << endl;
    cout << y[3] << endl;
    cout << z[1] << endl;
    cout << r[0] << endl;


    return 0;//Return statement 
}