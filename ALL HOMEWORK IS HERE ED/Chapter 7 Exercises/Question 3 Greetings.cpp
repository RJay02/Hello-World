#include <iostream>
using namespace std;

string greetings(string name, string greetings) {
	return greetings;//return newly formed string
}

int main() {
	string name;//declare variable to store userName
	string message;//declare variable to store greeting

	cout << "Please enter your name:";//ask user for name input
	cin >> name;//store input

	cout << "Please enter a greeting message:";//ask user for greeting input
	cin >> message;//store input

	string greeting = greetings(name, message); //invoke function and assign returned value to string variable
	cout << greetings << endl;//output the greeting

	return 0;
}