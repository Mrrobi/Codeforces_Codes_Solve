#include<bits/stdc++.h>
using namespace std;
int main(){
	char num[105];
	int n,t;
	cin>>n>>t;
	if(n==1&&t==10){
		cout<<"-1"<<endl;
		return 0;
	}
	else if(n!=1&t==10){
		for(int i=0;i<n-1;i++){
			num[i]=1+48;
		}
		num[n-1]=48;
		num[n]=NULL;
		cout<<num<<endl;
		return 0;
	}
	else if(t>=1&&t<=9){
		for(int i=0;i<n;i++){
			num[i]=t+48;
		}
		num[n]=NULL;
		cout<<num<<endl;
	}
}
