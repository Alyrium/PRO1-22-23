#include <iostream>
using namespace std;



int main(){
    int n,sum=0;
    while(cin>>n){
        cout<<"The sum of the digits of "<<n;
        while(n!=0){
            sum=sum+n%10;
            n=n/10;
        }
        cout<<" is "<<sum<<"."<<endl;
        sum=0;
    }
	return 0;
}