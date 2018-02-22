#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int n, money;
    vector<unsigned int> x;

    cin >> n;
    while(n--) {
        cin >> money;
        x.push_back(money);
    }
    sort(x.begin(), x.end());

    cin >> n;
    while(n--){
        cin >> money;
        vector<int>::iterator count;
        count = upper_bound(x.begin(), x.end(), money);
        cout << count-x.begin() <<endl;
    }
}
