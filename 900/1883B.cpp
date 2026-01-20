#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'


void precompute(){

}

void solve() {
    ll n,k; cin >> n >> k;
    string s; cin >> s;
    unordered_map<char,ll> mp;
    for(auto it : s){
        mp[it]++;
    }

    ll evn = 0,odd = 0;
    for(auto [x,y] : mp){
        if(y % 2 == 0){
            evn++;
        }
        else{
            odd++;
        }
    }

    ((n-k)%2 == 0)? k-=odd : k-=(odd-1);
    if(k < 0){
        cout << "NO" << endl;
    }
    else{
        (k % 2 == 0) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

}

int main(){
    fast_io;
    precompute();
    int t =1;
   cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
