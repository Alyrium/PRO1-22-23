#include <iostream>
using namespace std;



int main(){
  int n;
  while(cin>>n){
    int total=0;
    while(n>1){
      if(n%2==0){
	n=n/2;
      }else{
	n=n*3+1;
      }
      ++total;
    }
    cout <<total<<endl;
  }
  return 0;
}
