#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int n,m,ch(0);
    cin>>n>>m;
    if(n<m){
        ch=-1;
    }
    else{
        if(n%2){
            ch=n/2;
        }
        else{
            ch=(n/2)+1;
        }
        while(ch%m!=0)
            ch++;
    }
    cout<<ch<<endl;
    return 0;
}
