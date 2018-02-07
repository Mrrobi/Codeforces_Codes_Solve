#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n+1],max=0,max_in=1,min=0,min_in=1;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	max=arr[1];
	min=arr[1];
	for(int i=1;i<=n;i++){
		if(min>=arr[i]){
			min=arr[i];
			min_in=i;
		}
	}
	for(int i=n;i>=1;i--){
		if(max<=arr[i]){
			max=arr[i];
			max_in=i;
		}
	}
	int total=0;
	if(min_in>max_in){
		total+=max_in-1;
		total+=n-min_in;
	}
	else if(min_in<max_in){
		total+=max_in-1;
		total+=n-1-min_in;
	}
	cout<<total<<endl;
}
