#include<bits/stdc++.h>



using namespace std;

int main(){
    int n,total=0;
    cin>>n;
    total+=n/5;
    //cout<<total<<endl;
    n=n%5;
    total+=n/4;
    //cout<<total<<endl;
    n=n%4;
    total+=n/3;
    //cout<<total<<endl;
    n=n%3;
    total+=n/2;
    //cout<<total<<endl;
    n=n%2;
    total+=n/1;
    cout<<total<<endl;
}
