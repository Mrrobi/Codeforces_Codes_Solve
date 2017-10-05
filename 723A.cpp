#include<bits/stdc++.h>

using namespace std;

void sort(int arr[],int n){
    int key;
    for(int i = 1;i<n;i++){
        key=arr[i];
        int j = i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,3);
    cout<<arr[2]-arr[0]<<endl;
}
