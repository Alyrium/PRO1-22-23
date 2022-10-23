#include <iostream>
using namespace std;

int main(){
    char c;
    int sum=0;
    while(cin>>c and c!='.'){
        if(c=='a')++sum;
    }
    cout<<sum<<endl;
    return 0;
}