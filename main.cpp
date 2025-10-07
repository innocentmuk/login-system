#include <iostream>
#include <string>
using namespace std;
int main() {
	string user_name;
	int pass_word;
	cout << "Enter your username: ";
	getline(cin, user_name);
	if (user_name == "admin") {
		cout << "Enter your password: ";
		cin >> pass_word;
		if (pass_word == 1234) {
			cout << "Login successful.\n";
		}
		else {
			if (user_name == "admin" and pass_word != 1234) {
				cout << "Incorrect password.\n";
			}
		}
	}
	else { cout << "Unknown user" << endl; }
	return 0;
}
