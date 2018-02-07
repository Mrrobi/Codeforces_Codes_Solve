#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int l=n,key,sum=0;
	while(n--){
		cin>>key;
		sum+=key;
	}
	double total = (double)sum/(double)l;
	std::cout<<std::setprecision(12)<<std::fixed;
	cout<<total<<endl;
}
