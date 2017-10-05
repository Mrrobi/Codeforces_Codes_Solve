#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
int main(){
    long long int temp1[5];
    for(int x=0;x<4;x++){
        cin>>temp1[x];
    }
    int l=4;
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(temp1[i]==temp1[j]){
                for(int k=j;k<l;k++){
                    temp1[k]=temp1[k+1];
                }
                l--;
                j--;
            }
        }
    }
    cout<<4-l<<endl;
}
