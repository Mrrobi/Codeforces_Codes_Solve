#include<bits/stdc++.h>
//#include <string>
using namespace std;

int main()
{
	string x;
	int y,z,n,i,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y>>z;
		if((y>=2400) && z>y){
			count++;
		}
	}
	if(count!=0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;

}
