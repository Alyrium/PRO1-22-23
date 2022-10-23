#include <iostream>
using namespace std;


int main(){
	int a,b,p=1;
	
	while( cin>>a>>b ){
		if( b!=0 ){
			for(int i=0; i<b; ++i){
				p*=a;	
			}
		}
		cout<<p<<endl;
		p=1;
	}
	return 0;
}