#include <iostream>
using namespace std;

int sum(int num1, int num2, int num3) {
    int add = num1 + num2 + num3;
    cout << "The total of the three numbers is " << add << endl;
}

int main() {
    int num1, num2, num3;
    cout << "Enter the 1st number:";
    cin >> num1;
    cout << "Enter the 2nd number:";
    cin >> num2;
    cout << "Enter the 3rd number:";
    cin >> num3;
    sum(num1, num2, num3);
}