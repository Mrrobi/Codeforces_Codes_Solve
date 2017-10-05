#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int n,i,j,ch=0,ch2=0;
	cin>>n;
	char str[n+1];
	cin>>str;
	for(i=0;i<n;i++){
		if(str[i]=='1')
			ch++;
		if(str[i]=='0')
			ch2++;
	}
	int total = (2*max(ch,ch2))-n;
	cout<<total<<endl;
	return 0;
}
