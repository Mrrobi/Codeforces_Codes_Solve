#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n;
int gcd(int x);
int main(){
    int a,b;
    cin>>a>>b>>n;
    int count=1;
    while(1){
        if(count){
            count=0;
            if(gcd(a)){

            }
            else{
                break;
            }
        }
        else{
            count=1;
            if(gcd(b)){

            }
            else{
                break;
            }
        }
    }
    cout<<count<<endl;
}
int gcd(int x){
    int l;
    l = __gcd(x, n);
    n-=l;
    if(n<=0){
        return 0;
    }
    else return 1;
}
