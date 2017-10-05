#include<bits/stdc++.h>

using namespace std;
int main(){
    int arr[1000],n,max,min,max_index=0,min_index=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min||arr[i]==min){
            min=arr[i];
            min_index=i;
        }
        
    }
    for(int i = n-1;i>=0;i--){
        if(arr[i]>max||arr[i]==max){
            max=arr[i];
            max_index=i;
        }
    }
    if(max_index==0&&min_index==n-1){
        cout<<0<<endl;
    }
    else{
        int total;
    if(min_index>max_index){
        total = max_index;
        total+=(n-1-min_index);
    }
    else{
         total = max_index;
        total+=(n-2-min_index);
    }
    cout<<total<<endl;
    }
}
