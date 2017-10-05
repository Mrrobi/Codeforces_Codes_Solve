#include<bits/stdc++.h>
#include<cstring>
#define f(n) for(int i=0;i<n;i++)
#define p cout<<"YES"<<endl
#define p1 cout<<"NO"<<endl
using namespace std;

int main(){
    char str[101];
    scanf("%s",str);
    bool flag=false;
    int l = strlen(str);
    f(l){
        if(str[i]==57||str[i]==72||str[i]==81){
            flag=true;
            //printf("%d",str[i]);
            //cout<<"entered"<<endl;
        }
    }
    if(flag){
        p;
    }
    else{
        p1;
    }
}
