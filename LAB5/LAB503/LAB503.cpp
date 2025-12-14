#include <iostream>
#include <string>
using namespace std;

void swapValue(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << " Inside swapValue function: " << endl;
	cout << "a =" << a << " b =" << b << endl;
}

void swapRef(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << " Inside swapRef function: " << endl;
	cout << "a =" << a << " b =" << b << endl;
}

int main() {

	int a, b;
	cout << "Enter a integers: ";
	cin >> a;
	cout << "Enter b interger ";
	cin >> b;
	cout << " Before swapValue function: " << endl;
	cout << "a = " << a << " b =" << b << endl;
	
	swapValue(a, b);
	cout << "a = " << a << " b =" << b << endl;
	
	swapRef(a, b);
	cout << "a = " << a << " b =" << b << endl;
	




	return 1;
}