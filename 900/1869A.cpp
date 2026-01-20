#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'


void precompute(){

}

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &it : v) cin >> it;

    if(n % 2 == 0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
    else{
        cout << 4 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " << n-1 << endl;

        cout << n-1 << " " << n << endl;
        cout << n-1 << " " << n << endl;
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
