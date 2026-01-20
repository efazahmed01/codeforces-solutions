#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'


void precompute(){

}

void solve() {
    ll a,b, kx,ky,qx,qy; cin >> a >> b >> kx >> ky >> qx >> qy;
    vector<pair<ll,ll>>mv = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{-b,a},{-b,-a},{b,-a}};
    map<pair<ll,ll> ,bool> mp;
    for(auto it : mv){
        mp[it] = true;
    }
    ll cnt = 0;
    // for(auto it : mv){
    //     if(mp.find({qx-(kx+it.first),qy-(ky+it.second)}) != mp.end()){
    //         cnt++;
    //     }
    // }
    // if(a == b){
    //     cout << cnt/2 << endl;
    // }
    // else
    //     cout << cnt << endl;

    for(auto [x,y] : mp){
        if(mp.find({qx-(kx+x.first),qy-(ky+x.second)}) != mp.end())
            cnt++;
    }
    cout << cnt << endl;
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
