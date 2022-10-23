#include <iostream>
using namespace std;

int main (){
    int n = 0;
    char c;

    cin >> c;
    while (c != '.'){
        if (c == 'a') ++n;
        cin >> c;
    }
    cout << n << endl;

    return 0;
}