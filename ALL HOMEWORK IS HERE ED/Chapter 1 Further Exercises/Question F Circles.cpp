#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double radius;
    // while (radius > 0){
    cout << "Enter the radius of the circle:";
    cin >> radius;
    double Area = M_PI * radius;
    cout << "The Area of the circle is " << Area << endl;
    double Cir = 2 * M_PI * radius;
    cout << "The Circumference of the circle is " << Cir << endl;
}
// cerr <<"Please enter a valid radius"<<endl;




// }