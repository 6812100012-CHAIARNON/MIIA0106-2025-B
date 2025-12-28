#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;

    // change value of a through the pointer (dereference)
    *p = 100;

    cout << "a = " << a << endl;
    return 0;
}