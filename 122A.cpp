#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n%7==0){
        cout<<"YES"<<endl;
    }
    else if(n%4==0){
        cout<<"YES"<<endl;
    }
    else if(n%47==0){
        cout<<"YES"<<endl;
    }
    else{
        int x=n,key,con=0;
        while(x!=0){
            x=x/10;
            con++;
        }
        int *arr;
        arr=(int*)malloc(sizeof(int)*con);
        memset(arr,0,con);
        x=n;
        int k=0;
        while(x!=0){
            key=x%10;
            arr[k]=key;
            x=x/10;
            k++;
        }
        /*int k=0;
        for(int i=0;i<=400;i++){
            cout<<arr[i]<<endl;
            if(arr[i]!=0){
                arr2[k]=i;
                cout<<arr2[k]<<endl;
                k++;
            }
        }*/
        int flag=0;
        for(int i=0;i<k;i++){
            if(arr[i]!=4&&arr[i]!=7){
                flag=1;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}
