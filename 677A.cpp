#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h;
	cin>>n>>h;
	int a;
	int ct=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a<=h){
			ct+=1;
		}
		else if(a>h){
			ct+=2;
		}
	}
	cout<<ct<<endl;
}
