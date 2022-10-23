#include <iostream>
using namespace std;

int main(){
    char d;
    int ew=0,ns=0;
    while(cin>>d){
        if(d=='n')ns-=1;
        else if(d=='s')ns+=1;
        else if(d=='e')ew+=1;
        else if(d=='w')ew-=1;
    }
    cout<<"("<<ew<<", "<<ns<<")"<<endl;
    return 0;
}