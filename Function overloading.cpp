#include<iostream>
int Add(int a, int b) {
	return a + b;
}
double Add(double a, double b) {
	return a + b;
}
int main() {
	using namespace std;
	int result = Add(3, 5);
	cout << result << endl;
	Add(3.1, 6.2);
	return 0;
}