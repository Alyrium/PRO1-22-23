#include <iostream>
using namespace std;



int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	int n,m;
	while(cin>>n>>m){
		double Ht=0.0;
		for(int i=m+1; i<=n;++i){
			Ht+= 1.0/double(i);
		}
		cout<<Ht<<endl;
	}
	return 0;
}