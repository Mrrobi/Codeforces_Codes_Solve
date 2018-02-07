#include<bits/stdc++.h>
#include<string>
using namespace std;


int main(){
	char middle[10] = {"that"};
	char odd [50] = {"I hate"};
	char even[50] = {"I love"};
	char last[10] = {"it"};
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			cout<<odd<<" ";
			if(i!=n){
			cout<<middle<<" ";
			}
		}
		
		if(i%2==0){
			cout<<even<<" ";
			if(i!=n){
			cout<<middle<<" ";
			}
		}
	}
	cout<<last<<endl;
}
