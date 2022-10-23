#include <iostream>
using namespace std;



int main(){
	int b, x, sum=0;
	cin >> b;
	while(cin >> x){
		cout << x << ": ";
		while(x!=0){
			sum+=x%b;
			x=x/b;	
		}
		cout << sum << endl;
		sum=0;
	}
	return 0;
}