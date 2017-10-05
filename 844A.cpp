#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    char str[1001];
    int k,count=0;
    cin>>setw(1001)>>str;
    cin>>k;
    int len = strlen(str);
    if(len<k){
        cout<<"impossible"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(str[i]==str[j]){
                    count++;
                    break;
                }
            }
        }
        if((len-count)>k||(len-count)==k){
            count=0;
        }
        else{
            int l = len-count;
            count=k-l;
        }
        cout<<count<<endl;
    }
}
