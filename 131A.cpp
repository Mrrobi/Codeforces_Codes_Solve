#include<bits/stdc++.h>
#include<cstring>
#include<cctype>

using namespace std;
int main(){
    char str[101];
    scanf("%s",str);
    getchar();
    int len=strlen(str);
    str[0]=toupper(str[0]);
    for(int i=1;i<len;i++){
        str[i]=tolower(str[i]);
    }
    cout<<str<<endl;
}
