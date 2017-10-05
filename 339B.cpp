#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,count=0,x=0,a=1,ch=0;
	cin>>n>>m;
	long long int ara[m+1];
	for(int i=1;i<=m;i++){
		if(i==1){
            cin>>ara[a];
            a++;
        }
        else if(i!=1){
            cin>>ara[a];
            if(ara[a]==ara[a-1]){
                a--;
				ch++;
            }
			else{
				a++;
			}
        }
	}
	m=m-ch;
	//cout<<m<<" "<<a<<endl;
	a=1;

	for(int i=1;i<=n;i++){


        //cout<<count<<endl;
		if(ara[a]==i){
			a++;
			continue;
		}

        if(a>m)
            break;
        count++;
        if(i+1>n){
    		i=0;
    	}
	}
	cout<<count<<endl;
	return 0;
}
