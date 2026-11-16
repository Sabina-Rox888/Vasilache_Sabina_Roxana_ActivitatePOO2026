#include<iostream>
void Print(int* ptr) {
	using namespace std;
	cout << *ptr << endl;
	*ptr = 700;
}
int main() {
	using namespace std;
	const int CHUNK_SIZE = 512;
	const int *const ptr = &CHUNK_SIZE;
	int x = 10;
	Print(&x);
		cout << "main->x " << x << endl;
	return 0;
}