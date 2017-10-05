#include<bits/stdc++.h>

using namespace std;

struct j{
    int a;
    int b;
};
int main(){
    
    struct j k[31];
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k[i].a>>k[i].b;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                if(k[i].b==k[j].a){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    
}
