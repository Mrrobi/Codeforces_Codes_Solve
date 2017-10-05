#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[]) {
    int a,b,test,awin=0,bwin=0;
    cin>>test;
    for(int i =0;i<test;i++){
        cin>>a>>b;
        if(a>b)
            awin++;
        else if(b>a)
            bwin++;
        else if(a==b){
            awin++;
            bwin++;
        }
    }
    if(awin>bwin){
        cout<<"Mishka"<<endl;
    }
    else if(awin==bwin){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(bwin>awin){
        cout<<"Chris"<<endl;
    }
    return 0;
}
