#include <iostream>
using namespace std;

int main (){
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b) {
        b = a;
        if (b >= c) {
            c = b;
            cout << c << endl;
        } else {
            cout << c << endl;
        }
    } else {
        a = b;
        if (b >= c) {
            c = b;
            cout << c << endl;
        } else cout << c << endl;
    }
}