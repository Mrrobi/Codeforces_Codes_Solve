#include<bits/stdc++.h>
using namespace std;

/*----------------------------------------------<-<-<-thanx vai->->->--------------------------------------------------*/


#define FOR(n)          for(int i=0; i<(int)(n); ++i)
#define FORI(i, s, n)   for(int i=(int)(s); i<(int)(n); ++i)
#define RFORI(i, s, n)   for(int i=(int)(s); i>=(int)(n); --i)
#define F0RIJ(i, a)     for(int i=0; i<(int)(a); i++)
#define FORP(x)         for(__typeof__((x).begin()) it=(x).begin(); it!=(x).end(); ++it)

#define all(V)          V.begin(),V.end()
#define FF              first
#define SS              second
//#define sz(V)           ((int) (V).size())
#define pb              push_back
#define pii             pair<int, int>
#define ll              long long
#define sz              size()
#define ull             unsigned long long
#define ui              unsigned int
#define mem(A)          memset(A, 0, sizeof(A))
#define lg              length()

#define All(V,n)          V,V+n
#define clr(A,B)        memset(A,B,sizeof A)

#define input           freopen("input.txt", "r", stdin);
#define output          freopen("output.txt", "w", stdout);
#define sync            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dbg(args...)    {string sss(#args);sss+=',';cout<<"-->";debugger::call(all(sss), args);cout<<"\n";}
#define dbgA(A, n)      {cout<<"-->"<<#A<<"=(";FOR(n)cout<<A[i]<<" ";cout<<")\n";}
#define dbgA2(A, n, m)  {cout<<"-->"<<#A<<"=\n";FOR(n){FORI(j, 0, m){cout<<A[i][j]<<" ";}cout<<"\n";}cout<<"\n";}

#define int_input(a)    scanf("%d",&a)
#define float_input(a)  scanf("%f",&a)
#define int_input2(a,b)  scanf("%d %d",&a,&b)


#define yes             cout<<"Yes"<<endl;
#define no              cout<<"No"<<endl;
#define YES             cout<<"YES"<<endl;
#define NO              cout<<"NO"<<endl;

#define dt              int
#define inf             (1ll<<60)
#define infi			(1<<30)

struct debugger {
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest) {
        string b;
        for(; *it!=','; ++it) if(*it!=' ')b+=*it;
        cout << b << "=" << a << " ";
        call(++it, ed, rest...);
    }
};

int main(){
    dt n,ct=0;
    int_input(n);
    dt arr[n+1];
    FOR(n){
        int_input(arr[i]);
    }
    sort(All(arr,n));
    FOR(n-1){
    	if(arr[i]==arr[i+1]){
    		arr[i+1]++;
    		ct++;
		}
		else if(arr[i]>arr[i+1]){
			while(1){
				arr[i+1]++;
				ct++;
				if(arr[i+1]>arr[i])break;
			}
		}
	}
	cout<<ct<<endl;
}
