#include <iostream>
using namespace std;

int main(){
    char c;
    bool found=false;
    cin>>c;
    while(found!=true and c!='.'){
        if(c=='a')found=true;
        cin>>c;
    }
    if(found==true)cout<<"yes";
    else cout<<"no";
    cout<<endl;
    return 0;
}