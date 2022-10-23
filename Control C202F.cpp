#include <iostream>
using namespace std;

int main (){
    int ref,n,m;
    int count=0;
    cin>>m;
    ref=m%1000;

    cout<<"nombres que acaben igual que "<<m<<":"<<endl;
    while(cin>>n){
        if(n%1000==ref){
            cout<<n<<endl;
            ++count;
        }
    }
    cout<<"total: "<<count<<endl;
    return 0;
}