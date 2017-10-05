#include<bits/stdc++.h>
#include<string>
using namespace std;
bool faka = false;
void kahini(int);
void dekha_ki_krsos(int);
typedef struct line{
    string ch;
};
line sit[1001];
int main(){
    int test;
    cin>>test;
    for(int i = 0; i<test; i++){
        cin>>sit[i].ch;
        kahini(i);
    }
    dekha_ki_krsos(test);
}
void kahini(int i){
    if(!faka){
        if(sit[i].ch[0]=='O'&&sit[i].ch[1]=='O'){
            sit[i].ch[0]='+';
            sit[i].ch[1]='+';
            faka=true;
        }
        else if(sit[i].ch[3]=='O'&&sit[i].ch[4]=='O'){
            sit[i].ch[4]='+';
            sit[i].ch[3]='+';
            faka=true;
        }
    }
}
void dekha_ki_krsos(int test){
    if(faka){
        cout<<"YES"<<endl;
        for(int i =0;i<test;i++){
            cout<<sit[i].ch<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}
