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
    vector<ll> v(n);
    for(auto &it : v)
        cin >> it;
    sort(v.begin(),v.end());
    int cnt = 1,mx = 1;
    for(int i = 1; i < n; i++){
        if(v[i]-v[i-1] <= k){
            cnt++;
            mx = max(mx,cnt);
        }
        else{
            cnt=1;
        }
    }   
    
    cout << n-mx << endl;
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
