#include<bits/stdc++.h>

using namespace std;
int main(){
    int arr[51][51];
    int n,m;
    cin>>n>>m;
    int count=n*m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
            getchar();
        }
    }
    if(n!=1){
        for(int i=0;i<n;i++){
        if(arr[i][0]==arr[i][m-1]){
            count++;
        }
    }
    
    }
    if(m!=1){
        for(int j=0;j<m;j++){
        if(arr[0][j]==arr[n-1][j]){
            count++;
        }
    }
    }
    cout<<count<<endl;
}
