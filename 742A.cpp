#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ui;
int main(){
    ui n,sum;
    cin>>n;
    if(n==0){
        cout<<"1"<<endl;
        return 0;
    }
    sum=n%4;
    if(sum==0)cout<<"6"<<endl;
    else if(sum==1)cout<<"8"<<endl;
    else if(sum==2)cout<<"4"<<endl;
    else if(sum==3)cout<<"2"<<endl;
}
