#include<bits/stdc++.h>
#include<bitset>
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
string bin(int id,int bit){
		if(bit== 1){
			bitset<1>binary(id);
			return binary.to_string();
			}
		if(bit== 2){
			bitset<2>binary(id);
			return binary.to_string();
			}
		if(bit== 3){
			bitset<3>binary(id);
			return binary.to_string();
			}
		if(bit== 4){
			bitset<4>binary(id);
			return binary.to_string();
			}
		if(bit== 5){
			bitset<5>binary(id);
			return binary.to_string();
			}
		if(bit== 6){
			bitset<6>binary(id);
			return binary.to_string();
			}
		if(bit== 7){
			bitset<7>binary(id);
			return binary.to_string();
			}
		if(bit== 8){
			bitset<8>binary(id);
			return binary.to_string();
			}
		if(bit== 9){
			bitset<9>binary(id);
			return binary.to_string();
			}
		if(bit== 10){
			bitset<10>binary(id);
			return binary.to_string();
		}
}
int prob(string s){
	int l = s.lg,ct=0;
	FOR(l){
		if(s.at(i)=='0'){
			ct--;
		}
		else if(s.at(i)=='1'){
			ct++;
		}
	}
	return ct;
}

int main(){
	sync;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    std::cout<<std::setprecision(12)<<std::fixed;
	double o1=1.0,o2=0.5,o3=0.0;
	int l1 = s1.lg;
    int l2 =s2.lg;
    //dbg(l1,l2);
    int ct1=0,ct2=0,tempCt=0;
    FOR(l1){
    	if(s1.at(i)=='+'){
    		ct1++;
		}
		else if(s1.at(i)=='-'){
			ct1--;
		}
	}
	//dbg(ct1);
	FOR(l2){
		if(s2.at(i)=='+'){
			ct2++;
		}
		else if(s2.at(i)=='-'){
			ct2--;
		}
		else if(s2.at(i)=='?'){
			tempCt++;
		}
	}
	int arr[1500];
	double mil=0,sob=0;
	if(tempCt==0){
		if(ct1==ct2){
			cout<<o1<<endl;
		}
		else{
			cout<<o3<<endl;
		}
	}
	else if(tempCt!=0){
		FOR(pow(2,tempCt)){
			string temp = bin(i,tempCt);
			arr[i]=prob(temp)+ct2;
			//dbg(arr[i],i,temp);
			sob++;
			if(arr[i]==ct1)mil++;
		}
		cout<<(mil/sob)<<endl;
	}
}

