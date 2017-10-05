#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[15][15]={0};
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)arr[1][i]=1;
    for(int i = 2;i<=n;i++){
        for(int j =1;j<=n;j++){
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    cout<<arr[n][n]<<endl;
}
