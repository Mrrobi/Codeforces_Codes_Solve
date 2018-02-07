#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    pair<int,int>p[n+1];
    int arr[n+1];
    int mx=0,mn=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       if(i==0){
           p[i].first = abs(arr[i]-arr[i+1]);
           p[i].second = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
       }
       else if(i==(n-1)){
           p[i].first = abs(arr[i]-arr[i-1]);
           p[i].second = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
       }
       else{
           p[i].first = min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
           p[i].second = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
       }
    cout<<p[i].first<<" ";
    cout<<p[i].second<<endl;
    }
}