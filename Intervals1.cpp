#include <iostream>
#include <string>
using namespace std;

int main (){
    int a, A, b, B, c, C;
    cin >> a >> A >> b >> B;

    if (a >= b) c = a;
    else if (b >= a) c = b;

    if (A <= B) C = A;
    else if (B <= A)C = B;

    if (C >= c) cout << "[" << c << "," << C << "]" << endl;
    else cout << "[]" << endl;

    return 0;

}