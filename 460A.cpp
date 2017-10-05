#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int total,a,b;
    total=n;
    while(1){
        a=n/k;
        b=a+(n%k);
        n=b;
        total+=a;
        if(b<k){
            break;
        }
    }
    cout<<total<<endl;
}
