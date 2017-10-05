#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
    int n,key;
    cin>>n;
    int r=1;
    while(r*5<n){
        n-=r*5;
        //cout<<"n "<<n<<endl;
        r*=2;
        //cout<<"R "<<r<<endl;
    }
    key=(n-1)/r;
    switch(key){
        case 0:
            cout<<"Sheldon"<<endl;
            break;
        
        case 1:
            cout<<"Leonard"<<endl;
            break;
        case 2:
            cout<<"Penny"<<endl;
            break;
        case 3:
            cout<<"Rajesh"<<endl;
            break;
        case 4:
            cout<<"Howard"<<endl;
            break;
    }
}
