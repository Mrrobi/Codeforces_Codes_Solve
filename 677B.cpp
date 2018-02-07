#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h,k;
	cin>>n>>h>>k;
	int arr[n+1];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	puts(" ");
	int pro = arr[0],i=1,ct=0;
	//cout<<"Pro "<<pro<<endl;
	while(1){
		if(pro<=0&&i>=n) break;
		if(pro<0&&i<n) pro=0;
		if((pro+arr[i])<=h&&i<n){
			pro+=arr[i++];
			//cout<<"Pro "<<pro<<endl;
		}
		else{
			pro-=k;
			//cout<<"Pro "<<pro<<endl;
			ct++;
		}
		
	}
	cout<<ct<<endl;
}
