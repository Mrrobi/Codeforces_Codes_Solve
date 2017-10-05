#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    char str[1000],temp[1000];
    char key[4]={'W','U','B'};
    cin>>str;
    int  l = strlen(str),j=0,flag =0;
    for(int i=0;i<l;i++){
       if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
           
           if(flag==0&&i!=0){
               temp[j]=' ';
               j++;
               flag=1;
           }
           i+=2;
       }
       else{
           flag=0;
           temp[j]=str[i];
           j++;
       }
    }
    temp[j]=NULL;
    cout<<temp<<endl;
}
