#include <iostream>
using namespace std;




int main(){
	int n,m;
    bool endo=true;

	while(cin>>n>>m) {
		int num=0;
        if(!endo) cout<<endl;
		for(int i=0;i<n;++i){
			for(int j=0;j<m; ++j){
				cout<<9-num%10;
				num++;
			}
			cout<<endl;
		}
    endo=false;
	}
	return 0;
}