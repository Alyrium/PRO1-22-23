#include <iostream>
using namespace std;



int main(){
    int f,c,sum=0;
    cin>>f>>c;
    for(int i=0;i<f;++i){
        if((i%2)==0){
            for(int j=0;j<c;++j){
                char x;
                cin>>x;
                if(j%2==0)sum+=(int(x)-int('0'));
            }
        }
        else{
            for(int u=0;u<c;++u){
                char v;
                cin>>v;
                if((u%2)!=0)sum+=(int(v)-int('0'));
            }
        }
    }
    cout<<sum<<endl;

	return 0;
}