#include   <iostream>
#include  <string>
using namespace std;


int main (){
    double a;
    cin >> a;
    int ab = int (a);
    int as = int (a+0.5);
if (a==double(ab)){
    cout << ab/1 << " " << ab << " " << as << endl;
}
else {
    cout << ab/1 << " " << ab+1 << " " << as << endl;
    
} 
}