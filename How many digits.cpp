#include <iostream>
using namespace std;


int main(){
	int b, n, x=1;
	while(cin>>b>>n){
		while(n > (b-1)){
			++x;
			n/=b;
		}
		cout << x << endl;
		x = 1;
	}
	
	return 0;
}