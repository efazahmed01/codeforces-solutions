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
    string s; cin >> s;
    ll up = 1,mxUp=1,dwn = 1,mxDwn = 1;
    for(int i = 0; i < n-1; i++){
        if(s[i] == '<'){
            if(s[i] == s[i+1]){
                up++;
                mxUp = max(mxUp,up);
            }
            else up = 1;
        }
        else{
            if(s[i] == s[i+1]){
                dwn++;
                mxDwn = max(mxDwn,dwn);
            }
            else dwn = 1;
        }
    }

    cout << max(mxUp,mxDwn)+1 << endl;
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
