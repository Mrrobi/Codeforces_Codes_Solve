#include<bits/stdc++.h>
using namespace std;
#define m 10005
long long int arr[m];

void gen(){
	for(int i=1;i<=m;i++){
		arr[i]=arr[i-1]+i;
		//cout<<arr[i]<<endl;
	}
}

int main(){
	gen();
	int n,i=1,ct=0,total=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		total+=arr[i];
		if(total>n){
			break;
		}
		ct++;
	}
	
	cout<<ct<<endl;
	
}
