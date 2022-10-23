#include <iostream>
#include <cmath>
using namespace std;

int main (){
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;
    double aa = 0, bb = 0;
    double a = (1.0/(n-1)), b = (1.0/(n*(n-1)));

    for (int i = 0; i < n; ++i){
        double m;
        cin >> m;
        aa = aa + (m*m);
        bb = bb + m;
    }

    cout << (a*aa) - (b*bb*bb) << endl;

    return 0;
}