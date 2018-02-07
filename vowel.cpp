#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    char str[1000];
    int n,max=0,pos=-1,count,i;
    cin>>str;
    n = strlen(str);
    for( i = 0;i<n;i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'){
            count=i-pos;
            pos=i;
            if(count>max)
                max=count;
        }
    }
    count=i-pos;
    if(count>max)
        max=count;
    cout<<max<<endl;
}
