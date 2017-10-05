#include<bits/stdc++.h>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    char ch[1001],temp1[1000];
    gets(ch);
    int i=0,j=0;
    int len=strlen(ch);
    for(i=0;i<len;i++){
        if(isalpha(ch[i])){
            temp1[j]=ch[i];
            j++;
        }
    }
    temp1[j]='\0';
    puts(temp1);
    int l = strlen(temp1);
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(temp1[i]==temp1[j]){
                for(int k=j;k<l;k++){
                    temp1[k]=temp1[k+1];
                }
                l--;
                j--;
            }
        }
    }
    cout<<strlen(temp1)<<endl;
}
