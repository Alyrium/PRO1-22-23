#include <iostream>
using namespace std;

int main (){
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;

    cout << ((((y*365+d)*24+h)*60+m)*60+s) << endl;

    return 0;
}