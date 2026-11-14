#include<iostream>
#include<string>

int main() {
	int a1;//uniniatialized
	int a2 = 0;//copy initialization
	int a3(5);//direct initialisation
	std::string s1;
	std::string s2("C++");//direct initialisation

	char d1[8];//uninitialized
	char da2{ 8 } = { '\0' };
	char d3[8] = { 'a','b','c','d' };//aggregate initialisation
	char d4[8] = { "abcd" };

	int b1{};//value initialisation
	int b3{ 5 };//direct initialisation
//int b2(); most vexing parse, correct int b2{}

	int b4 = 0;

	char e1[8]{};
	char e2[8]{ "Hello" };

	int *p1 = new int{};

	char *p2 = new char[8] {};
	char *p3 = new char[8] {"Hello"};

}