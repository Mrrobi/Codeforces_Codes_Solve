#include<bits/stdc++.h>


using namespace std;
int fact(int n){
    int sum=1;
    for(int i=n;i>=1;i--){
        sum*=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<fact(arr[i])<<endl;
    }
}
