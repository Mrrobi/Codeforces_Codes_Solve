#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = k*l;
    int total_slice = c*d;
    int need_drink = n*nl;
    int need_salt = np*n;
    int res = min((total_drink/need_drink),p/need_salt);
    res = min(res,total_slice/n);
    cout<<res<<endl;
}
