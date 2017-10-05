#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    char str[n+1];
    cin>>str;
    strcpy(str,strlwr(str));
    //cout<<str<<endl;
    if(n<26){
        cout<<"NO"<<endl;
        return 0;
    }
    int l = strlen(str);
    //cout<<l<<endl;
    for(int i = 0;i<l;i++){
        for(int j = i+1;j<l;j++){
            if(str[i]==str[j]){
                for(int k = j;k<l;k++){
                    str[k]=str[k+1];
                }
                l--;
                j--;
                //cout<<str<<" "<<l<<" "<<i<<" "<<j<<endl;
            }
        }
    }
    if(strlen(str)==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
