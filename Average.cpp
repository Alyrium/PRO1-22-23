#include <iostream>
#include <cmath>
using namespace std;

int main (){
    cout.setf(ios::fixed);
    cout.precision(2);

    double n, s = 0;
    int m = 0;
    
    while (cin >> n) {
        s = s+n;
        ++m;
    }
    cout << s/m << endl;

    return 0;
}
