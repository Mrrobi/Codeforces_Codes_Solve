#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 int main(){
     int n,x,ch(0);
     cin>>n>>x;
     for (int i = 1; i <= n; i++)
       if (x % i == 0 and x / i <= n) ch++;
      cout<<ch<<endl;
 }
