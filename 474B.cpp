#include <bits/stdc++.h>

using namespace std;

int binarySer(int arr[],int l,int r,int key){
    if(l==r){
        return l;
    }
    int mid = (l+r)/2;
    if(mid>r||mid<l){
        return l;
    }
    if(arr[mid]<key){
        binarySer(arr,mid+1,r,key);
    }
    else if(arr[mid]>key){
        binarySer(arr,l,mid,key);
    }
    else if(arr[mid]==key){
        return mid;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int prev=0;
    for(int i=1;i<=n;i++){
        int key;
        cin>>key;
        while(key--){
            prev++;
        }
        arr[i]=prev;
    }
    int m;
    cin>>m;
    while(m--){
        int key;
        cin>>key;
        int res = binarySer(arr,1,n,key);
        cout<<res<<endl;
    }
    
}