#include<iostream>

int main() {
	using namespace std;
	int arr[] = { 1,2,3,4,5 };

	int* beg = &arr[0];
	int* end = &arr[5];

	while (beg != end) {
		std::cout << *beg << ' ';
		++beg;
	}
	return 0;

}
