#include <bits/stdc++.h>
using namespace std;
#define m 100005
int main() {
    char str[m];
    cin>>str;
    int l = strlen(str);
    int arr[m]={0};
    for(int i=0,j=1;i<l-1;i++){
        if(str[i]==str[i+1]){
            arr[j]=1;
        }
        else{
            arr[j]=0;
        }
        //cout<<arr[j]<<" j "<<j<<endl;
        j++;
    }
    int sum[m]={0},prev=0;
    for(int i=0;i<l;i++){
        sum[i]=arr[i]+prev;
        prev=sum[i];
        //cout<<sum[i]<<" "<<i<<endl;
    }
    int n1,lo,ri;
    cin>>n1;
    while(n1--){
        cin>>lo>>ri;
        cout<<sum[ri-1]-sum[lo-1]<<endl;
    }
}