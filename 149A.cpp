#include <bits/stdc++.h>

using namespace std;
bool cmp(int x,int y){
    return x>y;
}
int main(){
    int arr[13];
    int k;
    cin>>k;
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }
    if(k==0){
        cout<<"0"<<endl;
        return 0;
    }
    sort(arr,arr+12,cmp);
    int res=0,j=0;
    while(1){
        res+=arr[j++];
        if(res>=k||j==13){
            break;
        }
    }
    if(j!=13){
        cout<<j<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}