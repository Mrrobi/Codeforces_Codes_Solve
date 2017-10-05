#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;
char str3[2000];
int check(char str[]){
    int l = strlen(str);
    int l2 = strlen(str3);
    if(l==l2){
        for(int i= 0; i< l;i++){
            if(str[i]!=str3[i]){
                return 0;
            }
        }
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char str1[10000],str2[10000];
    gets(str1);
    gets(str2);
    gets(str3);
    strcat(str1,str2);
    sort(str1,str1+strlen(str1));
    sort(str3,str3+strlen(str3));
    if(check(str1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
