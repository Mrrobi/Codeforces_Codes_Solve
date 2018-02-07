#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
    	cout<<"1"<<endl;
    	return 0;
	}
    int count=1,max=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]||arr[i]==arr[i+1]){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            //max=count;
            count=1;
        }
    }
    cout<<max<<endl;
}
