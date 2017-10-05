#include<bits/stdc++.h>


using namespace std;

int main(){
    int x,a,b,c,max;
    cin>>a>>b>>c;
    max=x=a+b*c;
    x=a*(b+c);
    if(x>max)max=x;
    x=a*b*c;
    if(x>max)max=x;
    x=(a+b)*c;
    if(x>max)max=x;
    cout<<max<<endl;
}
