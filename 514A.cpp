#include <bits/stdc++.h>
using namespace std;
int main() {
    char num[20];
    cin>>num;
    if(num[0]!=57){
        num[0] = (num[0]>52)?(48+(57-num[0])):num[0];
    }
    for(int i=1;num[i]!=NULL;i++){
        num[i] = (num[i]>52)?(48+(57-num[i])):num[i];
    }
    cout<<num<<endl;
}