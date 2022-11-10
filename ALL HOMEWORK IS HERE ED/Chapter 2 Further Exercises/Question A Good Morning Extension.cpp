#include <iostream>
using namespace std;

int main() {
    int current_time = 23;
    string greeting;
    if (current_time >= 12) {
        cout << "It's PM" << endl;
    }
    else {
        cout << "It's AM" << endl;
    }

    if (current_time < 12) {
        greeting = "Good morning";
    }
    else if (current_time < 18) {
        greeting = "Good afternoon";
    }
    else if (current_time < 21) {
        greeting = "Good evening";
    }
    else if (current_time < 24) {
        greeting = "Good Night";
    }
    else {
        greeting = "Time Not Valid";
    }
    cout << greeting << endl;
}