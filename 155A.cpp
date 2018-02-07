#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[10005];
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	if(n==1){
		cout<<"0"<<endl;
		return 0;
	}
	int min = arr[1];
	int max = arr[1];
	int ct=0;
	for(int i = 2;i<=n;i++){
		if(arr[i]<min){
			min=arr[i];
			ct++;
		}
		else if(arr[i]>max){
			max=arr[i];
			ct++;
		}
	}
	cout<<ct<<endl;
}
