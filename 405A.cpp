#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
  int arr[100],n;
  cin>>n;
  for(int i = 0; i<n ; i++)
    cin>>arr[i];
  sort(arr,arr+n);
  for(int i = 0; i<n ; i++)
    printf("%d ",arr[i]);
  return 0;
}
