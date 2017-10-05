#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string a;
    int t;
    cin>>t>>a;
    int l = a.length();
    int A=0,D=0;
    for(int i =0;i<l;i++){
        if(a[i]=='A')
            A++;
        else if(a[i]=='D')
            D++;
    }
    if(A==D)
        cout<<"Friendship"<<endl;
    else if(A<D)
        cout<<"Danik"<<endl;
    else if(A>D)
        cout<<"Anton"<<endl;
}
