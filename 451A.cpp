#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int min=x;
    if(x>y)min=y;
    if(min%2==0){
        cout<<"Malvika"<<endl;
    }
    else cout<<"Akshat"<<endl;
}
