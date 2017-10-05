#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,total;
    cin>>n>>k;
    if(k>n){
        cout<<n<<endl;
    }
    else{
        while(n>0){
       if(n>=k){
           n=n-k+1;
           total+=k;
       }
       else{
           total+=n;
           break;
       }
    }
    cout<<total<<endl;
    }
}

