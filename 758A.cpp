

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	long long int n,i,total=0;
	cin>>n;
	long long int ara[n+1];
	long long int max;
	for(i=0;i<n;i++){
		cin>>ara[i];
	}
	sort(ara,ara+n);
    max=ara[n-1];
	if(n==1) cout<<0<<endl;
	else{
        for(i=0;i<n;i++){
            long long int x=max-ara[i];
            total+=x;
        }
    }
	if(n!=1) cout<<total<<endl;
	return 0;
}
