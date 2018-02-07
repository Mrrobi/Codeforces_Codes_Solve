#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int prev=1,curr;
	long long ct=0;
	for(int i=0;i<m;i++){
		cin>>curr;
		if(prev<=curr){
			ct+=curr-prev;
			prev=curr;
		}
		else if(prev>curr){
			ct+=n-prev+curr;
			prev=curr;
		}
	}
	cout<<ct<<endl;
}
