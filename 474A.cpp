#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    string pressed;
    cin>>ch;
    cin>>pressed;
    int l1 = pressed.length();
    int l2 = keyboard.length();
    if(ch=='R'){
        for(int i = 0; i<l1; i++){
            for(int j = 1; j<l2; j++){
                if(pressed[i]==keyboard[j]){
                    cout<<keyboard[j-1];
                }
            }
        }
    }
    else if(ch=='L'){
        for(int i = 0; i<l1; i++){
            for(int j = 0; j<l2-1; j++){
                if(pressed[i]==keyboard[j]){
                    cout<<keyboard[j+1];
                }
            }
        }
    }
    cout<<pressed<<endl;
}
