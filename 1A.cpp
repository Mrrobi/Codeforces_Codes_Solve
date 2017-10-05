#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    unsigned __int64 n,m,a;
    cin>>n>>m>>a;
    if(n==a&&m!=a&&a!=1){
        unsigned __int64 x = ceil((double)m/a);
        cout<<x<<endl;
    }
    else if(m==a&&n!=a&&a!=1){
        unsigned __int64 x = ceil((double)n/a);
        cout<<x<<endl;
    }
    else if(n!=a&&m!=a&&a<n&&a<m&&a!=1){
        unsigned __int64 x = ceil((double)n/a)*ceil((double)m/a);
        cout<<x<<endl;
    }
    else if((n==m&&m==a)||(n==m&&a>n)||(n!=m&&a>m||a>n)){
        int x=1;
        cout<<x<<endl;
    }
    else if(a==1){
        unsigned __int64 x= n*m;
        cout<<x<<endl;
    }
}
