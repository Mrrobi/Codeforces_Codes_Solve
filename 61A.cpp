#include<bits/stdc++.h>
#include<cstring>

using namespace std;
int main(){
    char str1[101],str2[101],temp[101];
    cin>>setw(101)>>str1;
    cin>>setw(101)>>str2;
    int l = strlen(str1);
    for(int i=0;i<l;i++){
        if(str1[i]==str2[i]){
            temp[i]='0';
            cout<<temp[i];
        }
        else{
            temp[i]='1';
            cout<<temp[i];
        }
    }
    return 0;
}
