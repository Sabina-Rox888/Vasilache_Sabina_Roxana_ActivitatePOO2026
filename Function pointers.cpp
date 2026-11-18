#include<iostream>
void Print(int count, char ch) {
	using namespace std;
	for (int i = 0; i < count; ++i) {
		cout << ch;
	}
	cout << endl;
}
void EndMessage(){
using namespace std;
cout<<"End of program"<<endl;
}

int main(){
	Print(5, '#');
	void (*pfn) (int, char) = &Print;
	(*pfn) (8, '@');
	pfn(5, '+');
	atexit(EndMessage);
	return 0;
	}
