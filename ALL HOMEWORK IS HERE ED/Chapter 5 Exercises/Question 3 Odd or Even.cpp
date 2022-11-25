#include <iostream>
using namespace std;

int main() {//Main function
	//Declaring variables 
	int i;
	for (i = 20; i < 25; i++) {//For loop to go through incrementing the value 
		if (i % 2 == 0) {//If statement to find out if even or odd
			cout << i << " - Even" << endl;//Output statement if even
		}
		else {
			cout << i << " - Odd" << endl;//Output statement if odd
		}
	}
}