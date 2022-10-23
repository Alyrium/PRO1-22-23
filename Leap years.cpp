#include <iostream>
using namespace std;


int main() {
    int anito;
    cin >> anito;
    
    if ((anito%4 == 0 and anito%100 != 0) or (anito%100 == 0 and(anito/100)%4 == 0)) cout << "YES";
    else cout << "NO";
    cout << endl;
}