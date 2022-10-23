#include <iostream>
using namespace std;

int main (){
    int n, m;
    cin >> n;

    for (int a = 1; a <= n; ++a) {
        m = (n * a);
        cout << n << " x " << a << " = " << m << endl;
    }
       
    return 0;
}