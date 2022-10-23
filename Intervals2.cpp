#include <iostream>
using namespace std;

int main (){
    int a, A, b, B;
    cin >> a >> A >> b >> B;

    if (a == b && A == B) cout << "=" << endl;
    else if ((a > b && A <= B) || (a >= b && A < B) || 
    (a == A && (a == b || A == B) )) cout << "1"<< endl;
     else if ((a < b && A >= B) || (a <= b && A > B) || 
     (b == B && (a == b || A == B) )) cout << "2" << endl;
     else cout << "?" << endl;
    
    return 0;
}