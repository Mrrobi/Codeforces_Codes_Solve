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
#define memclr(A)       memset(A, 0, sizeof(A))
#define memset(A)       memset(A, 1, sizeof(A))
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
	ll l=0,r=10,base=1;
	ll arr[15],Base[15],High[15];
	FOR(10){
		arr[i] = ((r-l)*base)+1;
		//dbg(arr[i]);
		Base[i]=base;
		//dbg(Base[i]);
		High[i]=r;
		//dbg(High[i]);
		l=r;
		r*=10;
		base++;
	}
	ll in,ct=0;
	cin>>in;
	if(in<10){
		cout<<in<<endl;
		return 0;
	}
	else if(in>=10){
		FOR(10){
			if(in==High[i]){
				ct+=arr[i];
				break;
			}
			else if(in<High[i]&&in>High[i-1]){
				//ct+=arr[i-1];
				ll temp = in-High[i-1];
				ct+=temp*Base[i];
				break;
			}
			ct+=arr[i];
		}
		cout<<ct<<endl;
		return 0;
	}
}

