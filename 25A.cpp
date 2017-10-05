#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,arr[101];
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    bool che=false,cho=false;
    int key;
    if(even>odd){
        cho=true;
    }
    else{
        che=true;
    }
    if(che){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
               key=i; 
            }
        }
    }
    if(cho){
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
               key=i; 
            }
        }
    }
    cout<<key+1<<endl;
}
