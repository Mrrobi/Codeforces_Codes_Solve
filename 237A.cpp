#include<bits/stdc++.h>
using namespace std;
int main(){
    string prev = "0";
    int n,lagbe(1),max(0);
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b,c;
        cin>>a>>b;
        c = a+b;
        if(c!=prev){
            prev=c;
            if(lagbe>max){
                max=lagbe;
            }
            lagbe=1;
        }
        else{
            lagbe++;
            if(lagbe>max){
                max=lagbe;
            }
        }
    }
    cout<<max<<endl;
}
