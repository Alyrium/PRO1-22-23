#include <iostream>
using namespace std;

int main(){
    int n,m=1;
    while(cin>>n and (n!=0 and n%2!=0))++m;
    cout<<m<<endl;
    return 0;
}