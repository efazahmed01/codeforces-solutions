#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'


void precompute(){

}

void solve() {
    ll n,k,x; cin >> n >> k >> x;
    ll lowersum = (k*(k+1))/2;
    ll uppersum = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    if(lowersum <= x && uppersum >= x){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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
