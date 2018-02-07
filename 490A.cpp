#include<bits/stdc++.h>
#define m 5005
using namespace std;
int arr1[m],arr2[m],arr3[m];
int main(){
	int n,key,t1=0,t2=0,t3=0;
	cin>>n;
	int team,one=0,two=0,three=0;
	for(int i=1;i<=n;i++){
		cin>>key;
		if(key==1){
			one++;
			arr1[t1++]=i;
		}
		else if(key==2){
			two++;
			arr2[t2++]=i;
		}
		else if(key==3){
			three++;
			arr3[t3++]=i;
		}
	}
	int temp = min(one,two);
	team = min(temp,three);
	cout<<team<<endl;
	for(int i=0;i<team;i++){
		cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
	}
}
