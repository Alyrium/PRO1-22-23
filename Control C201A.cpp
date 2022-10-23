#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a, c;
  c = 0;
  cin >> a;

  for(int i = a; i > 0; i /= 100) c += (i % 10);
  if(c % 2 == 0 or c == 0) cout << a << " IS COOL" << endl;
  else cout << a << " IS NOT COOL" << endl;

  return 0;
}