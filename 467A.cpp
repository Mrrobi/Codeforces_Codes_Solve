#include<bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int p[100],q[100],rem[100];
    int n;
    cin>>n;
    f(n){
        cin>>p[i]>>q[i];
        rem[i]=q[i]-p[i];
    }
    int count=0;
    f(n){
        if(rem[i]>=2){
            count++;
        }
    }
    cout<<count<<endl;
}
