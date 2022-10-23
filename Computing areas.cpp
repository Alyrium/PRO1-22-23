#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main (){
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    cin >> n;

    for (int i=0; i<n; ++i){
        string fm;
        cin >> fm;

        if (fm == "rectangle") {
            double w, l;
            cin >> w >> l;
            cout << w*l;
        } else if (fm == "circle") {
            double r;
            cin >> r;
            cout << M_PI*r*r;
        }
        cout << endl;
    }

    return 0;
}