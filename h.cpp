#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct pr{
	int first;
	int second;
};

int main()
{
	long long int n,i;
	cin>>n;
    struct pr pair[n];
	for(i=0;i<n;i++){
		cin>>pair[i].first>>pair[i].second;
	}
	//sort(pair,pair+n);
	for(int j=0;j<n-1;j++){
		if(pair[j].first<pair[j+1].first && pair[j].second>pair[j+1].second){
			cout<<"Happy Alex"<<endl;
			return 0;
		}
	}
	cout<<"Poor Alex"<<endl;
	return 0;
}
