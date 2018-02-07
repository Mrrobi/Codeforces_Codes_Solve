#include<bits/stdc++.h>
#define bur 10
using namespace std;
int main(){
	int k,r;
	cin>>k>>r;
	int ct[1000]={0},total=0,i=1,j=0;
	for(i=1;i<=10;i++){
		if(k*i%10==0){
			cout<<i<<endl;
			return 0;
		}
		else if(k*i%10==r){
			cout<<i<<endl;
			return 0;
		}
	}
}
