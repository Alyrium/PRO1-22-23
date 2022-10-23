#include <iostream>
using namespace std;

int main (){
    int e, s, t, w = 0;
    cin >> e >> s >>t;
    for (int i = 0; i < t; ++i){
        int a;
        cin >> a;
        s = s+a-e;
        if ((w < t) and (s > 0)){
            ++w;
        }
    }
    cout << w << endl;

    return 0;
}