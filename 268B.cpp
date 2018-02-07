#include<bits/stdc++.h>
#define f(n) for(int i = (n-1) ; i>=1 ; i--)

using namespace std;

int main(){
    int n;
    cin>>n;
    int j=1,sum=0;
    f(n){
        sum+=(i*j);
        j++;
    }
    cout<<(sum+n)<<endl;
}
