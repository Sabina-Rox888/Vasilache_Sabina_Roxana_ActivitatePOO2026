#include<iostream>
 
void CreateWindow(const char* title, int x, int y, int width, int height);

void CreateWindow(const char* title, int x, int y, int width, int height) {
	using namespace std;
	cout<<"Title: " << title << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
}
int main() {
	CreateWindow("Notepad", 150, 200, 500, 600);
	return 0;
}