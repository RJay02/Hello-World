#include <iostream>
#include <string>
using namespace std;

int main() {
    double intial_money = 50.50;
    int usb_price = 6;
    int x = intial_money / usb_price;
    double money_left = intial_money - (x * usb_price);

    cout << "She can buy " << x << " USB sticks" << endl;
    cout << "She has £" << money_left << " left" << endl;
    return 0;

}