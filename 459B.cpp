#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
const int m = 200005;
int arr[m];
int main()
{
    int mn=INF,mx=0;
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn = min(mn,arr[i]);
        mx = max(mx,arr[i]);
    }
    cout<<(mx-mn)<<" ";
    long long int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        cnt1 += (mn==arr[i]);
        cnt2 += (mx==arr[i]);
    }
    if(mn==mx){
        cout<<n*(n-1)/2;
    }
    else{
        cout<<cnt1*cnt2;
    }
}