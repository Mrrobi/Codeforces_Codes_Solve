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
pii dat[1000005];
int main(){
    
    ll l_sum=0,r_sum=0,mx=-infi,mx_diff=-infi;
    int n,mx_pos=0;
    cin>>n;
    FOR(n){
    	cin>>dat[i].FF>>dat[i].SS;
    	l_sum+=dat[i].FF;
    	r_sum+=dat[i].SS;
	}
	ll besi = abs(l_sum-r_sum);
	FOR(n){
    	if(abs((l_sum-dat[i].FF+dat[i].SS)-(r_sum-dat[i].SS+dat[i].FF))>besi){
    		mx_pos=i+1;
    		besi=abs((l_sum-dat[i].FF+dat[i].SS)-(r_sum-dat[i].SS+dat[i].FF));
		}
	}
	cout<<mx_pos<<endl;
}

