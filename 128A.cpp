#include<bits/stdc++.h>
#include<cstring>

using namespace std;
int main(){
    char str1[100],str2[100];
    cin>>setw(101)>>str1;
    strcpy(str1,strlwr(str1));
    cin>>setw(101)>>str2;
    strcpy(str2,strlwr(str2));
    int x=strcmp(str1,str2);
    cout<<x<<endl;
}
