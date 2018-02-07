#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,gap,count(1);
    cin>>test>>gap;
    int arr[test+1];
    for(int i = 0;i<test;i++){
        cin>>arr[i];
        if(i!=0){
            if((arr[i]-arr[i-1])<=gap){
                count++;
            }
            else{
                count=1;
            }
        }
    }
    cout<<count<<endl;
}
