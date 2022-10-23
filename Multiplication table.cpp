#include <iostream>
using namespace std;

int main (){
    int n, m;
    cin >> n;

    for (int a = 1; a <= 10; ++a) {
        m = (n * a);
        cout << n << "*" << a << " = " << m << endl;
    }
       
    return 0;
}