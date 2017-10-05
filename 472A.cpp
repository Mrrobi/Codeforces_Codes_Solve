#include<bits/stdc++.h>


using namespace std;
int prime(int);

int main(){
    
    long int n,x,y;
    
    int flag = 0;
    
    cin>>n;
    x=4;
    y=n-4;
    for(int i=0;i<n;i++){
        int m = prime(x);
        int n = prime(y);
        if(n==1&&m==1){
            cout<<x<<" "<<y<<endl;
           return 0;
        }
        x++;
        y--;
    }   
}
int prime(int n){
    //cout<<n<<endl;
    int flag = 0;
    for(int i = 2 ; i <n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}
