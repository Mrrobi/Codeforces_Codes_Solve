#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define M 1000000
bool arr[M];
void seive(){
	memset(arr,true,sizeof(arr));
	for(int i=2;i<=M;i++){
		if(arr[i]){
			for(int j=i*2;j<=M;j+=i){
				arr[j]=false;
				//cout<<j<<endl;
			}
			//cout<<i<<arr[i]<<endl;
		}
	}
}
int main(){
	seive();
	long long int key,sq;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>key;
		sq=sqrt(key);
		long long int s = sq*sq;
		//cout<<s<<endl;
		if(s==key&&arr[sq]&&key!=1){
			cout<<"YES"<<endl;
		}
		else{
			puts("NO");
		}
	}
}
