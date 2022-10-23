#include <iostream>
using namespace std;

int main (){
    int a, b;
    cin >> a >> b;

    if (b >= a) while (b >= a) {
        cout << b << endl;
        --b;
    }
    else while (b <= a) {
        cout << a << endl;
        --a;
    }
    return 0;
}