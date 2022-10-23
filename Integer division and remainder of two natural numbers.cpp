#include <iostream>
using namespace std;

int main (){
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "no mames weon eso es ilegal" << endl;
    } else cout << (a/b) << " " << (a%b) << endl;

    return 0;
}