#include<bits/stdc++.h>


#define f(n) for(int i =0;i<n;i++)
using namespace std;

int main(){
    int n,arr[100001],sum=0;
    cin>>n;
    f(n){
        cin>>arr[i];
        if(arr[i]<0&&i!=0&&arr[i-1]>0||arr[i]>0&i!=0&arr[i-1]>0){
            //cout<<arr[i]<<endl;
            arr[i]=arr[i-1]+arr[i];
            //cout<<arr[i]<<endl;
        }
    }
    f(n){
        if(arr[i]<0)
            sum++;
    }
    cout<<sum<<endl;
}
