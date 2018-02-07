#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	char num[100],num2[100];
	int temp1,temp2;
	cin>>n;
	if(n>=0){
		cout<<n<<endl;
		return 0;
	}
	sprintf(num,"%d",n);
	sprintf(num2,"%d",n);
	int l = strlen(num);
	num[l-2]=num[l-1];
	num[l-1]=NULL;
	num2[l-1]=NULL;
	temp1 = atoi(num);
	temp2 = atoi(num2);
//	temp2 = abs(temp2);
//	temp1 = abs(temp1);
	int res = ((abs(temp1)<abs(temp2))?temp1:temp2);
	cout<<res<<endl;
}
