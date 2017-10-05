#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,k;
    int arr[90000],temp[90000]={0};
    cin>>n>>k;
    for(int i = 0;i<n-1;i++){
        cin>>arr[i];
    }
    if(k==1){
        cout<<"YES"<<endl;
        return 0;
    }
    else{
        int sum=0,i=0;
        for(int i=0;i<n-1;){
            i+=arr[i];
            if(i==k-1){
            cout<<"YES"<<endl;
            return 0;
            }
        }
        cout<<"NO"<<endl;
            return 0;
        
    }
    
}
