#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        int result =b;
        cout<<result<<" ";
        result=(a-b)/2;
        cout<<result<<endl;
        return 0;
    }
    else if(a<b){
        int result =a;
        cout<<result<<" ";
        result=(b-a)/2;
        cout<<result<<endl;
        return 0;
    }
    else if(a==b){
        cout<<a<<" "<<'0'<<endl;
    }
}
