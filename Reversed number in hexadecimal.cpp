#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    if (n == 0) cout << n;
    else while (n > 0){

        if (n%16 <= 9) cout << n%16;
        else if (n%16 >= 10) {
            int chara = n%16 + 55;
            cout << char(chara);
        };

        n = n/16;
    } 
    cout << endl;

    return 0;
}