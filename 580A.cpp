#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1,max=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]||arr[i]==arr[i+1]){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            //max=count;
            count=0;
        }
    }
    cout<<max<<endl;
}
