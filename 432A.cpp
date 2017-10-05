#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k,sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        arr[i]+=k;
        if(arr[i]<=5){
            sum++;
        }
    }
    cout<<sum/3<<endl;
}
