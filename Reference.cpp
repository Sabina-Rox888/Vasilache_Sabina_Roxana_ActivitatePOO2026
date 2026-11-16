#include<iostream>

int main() {
	using namespace std;
	//Referent
	int x = 10;
	//Reference
	int  &ref = x;
	ref=6;
	cout << "x:" << x << endl;
	cout << "ref:" << ref << endl;
	return 0;
}
