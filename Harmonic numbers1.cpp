#include <iostream>
using namespace std;

int main (){
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double n, r = 0;
    cin >> n;
    
    for (double a = 1; a <= n; ++a){
        r += (1/a);
    }
    cout << r << endl;

    return 0;
}