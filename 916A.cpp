#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,h,m;
    cin>>x;
    cin>>h>>m;
    int ct=0;
    while(1){
        if(m==07||m==17||m==27||m==37||m==47||m==57||h==07||h==17){
            break;
        }
        else{
            m-=x;
            if(m<0){
                h--;
                m+=60;
                if(h<0){
                    h+=24;
                }
            }
        }
        ct++;
    }
    cout<<ct<<endl;
}