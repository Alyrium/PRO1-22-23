#include <iostream>
using namespace std;

int main (){
    int n, r = 0;
    cin >> n;
    
    for (int a = 1; a <= n; ++a){
        r += a*a;
    }
    cout << r << endl;

    return 0;
}