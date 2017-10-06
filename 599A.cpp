#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int a,b,c;
    int sum1(0),sum2(0),sum3(0),sum4(0);
    cin>>a>>b>>c;
    sum1=a*2+b*2;
    sum2=a+b+c;
    sum3=a+a+c+c;
    sum4=b+b+c+c;
    cout<<(min(sum4,min(sum3,min(sum1,sum2))))<<endl;
    return 0;
}
