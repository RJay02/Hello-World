#include <iostream>
using namespace std;

int main() {
    char characters[26];
    int integers[10];
    string strings[4];
    float decimal[18];

    int numbers[7];
    numbers[1] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;
    numbers[5] = 6;
    numbers[6] = 7;
    numbers[7] = 8;
    cout << numbers[7] << endl;

    string words[1];
    words[0] = "Hello";
    words[1] = "Bye";
    cout << words[1] << endl;

    char letters[2];
    letters[0] = 'A';
    letters[1] = 'B';
    letters[2] = 'C';
    cout << letters[2] << endl;

    float decimals[4];
    decimals[0] = 1.0;
    decimals[1] = 2.0;
    decimals[2] = 3.0;
    decimals[3] = 4.0;
    decimals[4] = 5.0;
    cout << decimals[2] << endl;


    int values[5];
    values[0] = 10;
    values[1] = 20;
    values[2] = 30;
    values[3] = 40;
    values[4] = 50;
    values[5] = 60;
    cout << values[2] << endl;


    string x[] = { "","a","aa","aaa" };
    int y[] = { 1,10,100,1000,10000 };
    bool z[] = { true,false,false,true };
    float r[] = { 5.6,1.8,4.34,7.65 };

    cout << x[2] << endl;
    cout << y[3] << endl;
    cout << z[1] << endl;
    cout << r[0] << endl;


    return 0;
}
