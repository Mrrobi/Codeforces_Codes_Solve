#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b,v,bw=0,vw=0,count=0;
	cin>>b>>v;

	while(1){
		b=(b*3);
		v=(v*2);
		count++;
		if(b>v){
			break;
		}
	}
	cout<<count<<endl;
	
}
