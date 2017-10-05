#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b;
    int acon=0,bcon=0,total1,total2,total3;
    cin>>n>>m>>a>>b;
    total3=(n*a);
    total2= ((n/m)+1)*b;
    while(n%m!=0){
        n--;
        acon++;
    }
    bcon=n/m;
    total1=((acon*a)+(bcon*b));
    if(total1<=total2&&total1<=total3){
        cout<<total1<<endl;
    }
    else if (total2<=total1&&total2<=total3){
        cout<<total2<<endl;
    }
    else if(total3<=total1&&total3<=total2){
        cout<<total3<<endl;
    }
}
