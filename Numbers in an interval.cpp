#include <iostream>
using namespace std;

int main (){
    int a, b;
    cin >> a >> b;

    while (a < b) {
        cout << a << ",";
        ++a;
    } 
    if (a == b) cout << a;
    cout << "" << endl;

    return 0;
}