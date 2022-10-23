#include <iostream>
using namespace std;



int main(){
	int f,c,sum=0;
	char num;
	cin>>f>>c;
	for(int i=0; i<f; ++i){
		for(int y=0; y<c; ++y){
			cin>>num;
			sum+=num%'0';
		}
	}
	cout<<sum<<endl;
	return 0;
}