#include<bits/stdc++.h>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;

int main(){
    char str[1000];
    cin.getline(str,1000);
    int l = strlen(str);
    int up=0,lo=0;
    for(int i=0;i<l;i++){
        if(isupper(str[i])){
            up++;
        }
        if(islower(str[i])){
            lo++;
        }
    }
    if(up>lo){
        strcpy(str,strupr(str));
    }
    else{
        strcpy(str,strlwr(str));
    }
    cout<<str<<endl;
}
