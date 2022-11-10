#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    cout << "Enter temperature in Fahrenheit:";
    double x;
    cin >> x;
    float celcius = ceil((x - 32) * 0.5556);
    cout << x << " Fahrenheit is " << celcius <<
        " in Celsius" << endl;

}