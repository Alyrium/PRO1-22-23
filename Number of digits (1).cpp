#include <iostream>
using namespace std;

int main (){
    int c, n=1;
    cin >> c;

    cout << "The number of digits of " << c;
    while (c > 9){
        c = c/10;
        ++n;
    }
    cout << " is " << n << "." << endl;

    return 0;
}