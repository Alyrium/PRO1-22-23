#include <iostream>
#include <string>
using namespace std;

int main (){
    int a, A, b, B, c, C;
    char s;
    cin >> a >> A >> b >> B;

    if (a == b && A == B) s = '=' ;
    else if ((a > b && A <= B) || (a >= b && A < B) || 
    (a == A && (a == b || A == B) )) s = '1';
     else if ((a < b && A >= B) || (a <= b && A > B) || 
     (b == B && (a == b || A == B) )) s = '2';
     else s = '?';

    if (a >= b) c = a;
    else if (b >= a) c = b;

    if (A <= B) C = A;
    else if (B <= A)C = B;

    if (C >= c) cout << s << " , " << "[" << c << "," << C << "]" << endl;
    else cout << s << " , " << "[]" << endl;

    return 0;

}