#include <iostream>
using namespace std;

int main() {
    char letter;
    cin >> letter;
    cout << ((letter >= 'A' && letter <= 'Z') ? "uppercase" : "lowercase") << endl;
    cout << ((letter == 'a' || letter == 'e' || letter == 'i' ||
        letter == 'o' || letter == 'u' || letter == 'A' ||
        letter == 'E' || letter == 'I' || letter == 'O' ||
        letter == 'U') ? "vowel" : "consonant") << endl;
    return 0;
}