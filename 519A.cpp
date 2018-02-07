#include<bits/stdc++.h>
#include<cctype>
#include<string>
#define f for(int i=0;i<8;i++)
#define f2 for(int j=0;j<8;j++)
#define Q 9
#define R 5
#define B 3
#define N 3
#define P 1
#define q 9
#define r 5
#define b 3
#define n 3
#define p 1
using namespace std;
int main(){
    string ch;
    int white(0),black(0);
    f{
        cin>>ch;
        f2{
            if(islower(ch[j])){
                if(ch[j]=='q'){
                    black+=q;
                }
                else if(ch[j]=='r'){
                    black+=r;
                }
                else if(ch[j]=='b'){
                    black+=b;
                }
                else if(ch[j]=='n'){
                    black+=n;
                }
                else if(ch[j]=='p'){
                    black+=p;
                }
            }
            else if(isupper(ch[j])){
                if(ch[j]=='Q'){
                    white+=Q;
                }
                else if(ch[j]=='R'){
                    white+=R;
                }
                else if(ch[j]=='B'){
                    white+=B;
                }
                else if(ch[j]=='N'){
                    white+=N;
                }
                else if(ch[j]=='P'){
                    white+=P;
                }
            }
        }
    }
    if(black==white){
        cout<<"Draw"<<endl;
    }
    else if(white>black){
        cout<<"White"<<endl;
    }
    else if(white<black){
        cout<<"Black"<<endl;
    }
}
