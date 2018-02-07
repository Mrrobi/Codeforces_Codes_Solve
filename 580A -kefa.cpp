//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<algorithm>
#include<cstdlib>
#define rep(x,n) for(int i = x;i<n;i++)
#define repD(x,n) for(int i = x;i<=n;i++)
#define repd(a,b,n) for(int i = a;i<=n;i+=b)
#define in(x) cin>>x;
#define MAX 10000000
#define W(x) while(x)
#define srt(a,n) sort(a,a+n)
#define srtcmp(a,n) sort(a,a+n,cmp)
#define inf (1<<30)
#define max(a, b) (a < b ? b : a)
#define min(a, b) (a > b ? b : a)
#define PI acos(-1.0)
#define Pi 3.141592653589793
#define sqr(x) (x*x)
#define SET(a) memset( a, -1,    sizeof a )
#define CLR(a) memset( a,  0,    sizeof a )
#define MEM(a,val) memset( a,  val,  sizeof(a) )
#define ignore cin.ignore()

typedef long long i64;
typedef unsigned long long ui64;
using namespace std;

int check(int x, int y){
	if(x<=y){
		return 1;
	}
	return 0;
}

int main(){
	//ios_base::sync_with_stdio(0);
	int n;
	in(n);
	int a[n+1];
	rep(0,n){
		in(a[i]);
		cout<<a[i]<<endl;
	}
	int sum=1;
	repD(1,n){
		if(a[i-1]<a[i]){
			sum++;
		}
		else{
			sum=1;
		}
	}
	cout<<sum<<endl;
}


