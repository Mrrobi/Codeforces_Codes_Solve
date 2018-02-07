#include<bits/stdc++.h>
using namespace std;
typedef long long int i64;
int main(){
	int n;
	cin>>n;
	i64 a=0,b=0,c=0;
	for(int i=1;i<=n;i++)
	{
		int k;
		cin>>k;
		a+=k;
	}
	for(int i=1;i<=n-1;i++)
	{
		int k;
		cin>>k;
		b+=k;
	}
	for(int i=1;i<=n-2;i++)
	{
		int k;
		cin>>k;
		c+=k;
	}
	cout<<(a-b)<<endl;
	cout<<(b-c)<<endl;
	return 0;
}
