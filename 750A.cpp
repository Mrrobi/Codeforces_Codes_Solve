#include<bits/stdc++.h>
#define max 240
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	int rem = max-k;
	int ct=0;
	for(int i=1;i<=n;i++){
		if(rem>=(i*5)){
			rem-=(i*5);
			ct++;
		}
	}
	cout<<ct<<endl;
}
