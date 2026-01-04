#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
		cout << "Enter id: ";
		cin >> students[i].id;
		cout << "Enter nickname: ";
		cin >> students[i].nickname;
		cout << "Enter lineId: ";
		cin >> students[i].lineId;
		cout << "Enter phone: ";
		cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
        cout << "ID\tnickname\tLine ID\t Phone \n";
        cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }

    return 1;
}
