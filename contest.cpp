#include<bits/stdc++.h>

#include<cstring>

#include<string>

using namespace std;

int main(){
    
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n-1;i++){
        if(arr[i]==1&&arr[i+1]==0){
            for(int j=i+1;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;
            //i--;
        }
    }
    cout<<n<<endl;
}
