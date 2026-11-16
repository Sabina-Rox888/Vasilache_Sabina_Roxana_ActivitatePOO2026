#include<iostream>

int main() {
	using namespace std;
	int x = 10;
	cout << &x<<"\n";
	int* ptr = &x;
	cout << ptr<<"\n";
	return 0;
}