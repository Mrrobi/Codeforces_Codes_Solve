#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char str[10000];
    cin>>setw(101)>>str;
    long int l=strlen(str);
    strcpy(str,strlwr(str));
    for(long int i=0;i<=l;i++){
        if(str[i]=='a'||str[i]=='o'||str[i]=='y'||str[i]=='e'||str[i]=='u'||str[i]=='i'){
            for(long int j=i;j<l;j++){
                str[j]=str[j+1];
                str[j+1]=NULL;
            }
            l--;
            i--;
        }
    }
    long int l2=strlen(str);
    long int l3=l2*2;
    str[l3]=NULL;
    l3-=2;
    for(long int i=l2-1;i>=0;i--){
        str[i*2+1]=str[i];
            
            str[l3]=46;
            l3-=2;
    }
    
    puts(str);
}
