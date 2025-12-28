

#include <iostream>
using namespace std;

int main()
{
    int score = 50;
    int* ptr = &score;

    cout << "score = " << score << endl;
    cout << "Address of score = " << &score << endl;
	cout << "ptr = " << ptr << endl;
    cout << "Address of ptr = " << &ptr << endl;

    return 0;
}