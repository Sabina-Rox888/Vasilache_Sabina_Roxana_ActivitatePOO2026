#include<iostream>

int main() {
	using namespace std;
	float radius = 0;
	cin >> radius;
	const float PI = 3.141f;
	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;
	cout << "Area is: " << area << endl;
	cout << "Circumference is: " << circumference << endl;
	return 0;
}