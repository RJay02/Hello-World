
#include <iostream>
#include <string>//Used 
using namespace std;

string greetings(string name, string greet) {//declaring the variables being used
	string newMsg = greet + " " + name;//concatenate the two strings 
	return newMsg;//return newly formed string
}

int main() {
	string name;//declare variable to store userName
	string message;//declare variable to store greeting

	cout << "Please enter your name:";//ask user for name input
	cin >> name;//store input

	cout << "Please enter a greeting message:";//ask user for greeting input
	cin >> message;//store input

	string outputmsg = greetings(name, message); //invoke function and assign returned value to string variable
	cout << outputmsg << endl;//output the greeting

	return 0;
}
