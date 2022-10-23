#include <iostream>
using namespace std;

int main() {
    char letter;
    cin >> letter;

    if (letter >= 'A' and letter <= 'Z') {
        cout << char(letter - 'A' + 'a') << endl;
    } else {
        cout << char(letter - 'a' + 'A') << endl;
    }
}