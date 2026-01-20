#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'


void precompute(){

}

void solve() {
    ll n,k,m; cin >> n >> k >> m;
    ll s = k;
    while(m--){
        ll x; cin >> x;
        (x+1 > n) ? s+=(n-1) : s+=x;
    }
    cout << s << endl;
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
