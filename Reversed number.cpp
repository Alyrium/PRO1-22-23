#include <iostream>
#include <string>
using namespace std;

int main (){
    int n;
    cin >> n;

    if (n == 0) cout << "0" << endl;
    else {
        while (n > 0){
            cout << (n%10);
            n = n/10;
        }
        cout << endl;
    }

    return 0;
}