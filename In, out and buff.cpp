#include<iostream>

int main() {
	using namespace std;
	char buff[512];
	cout << "What is your name?";
	cin >> buff;
	cout << "Your name is:" << buff << endl;
	return 0;
}