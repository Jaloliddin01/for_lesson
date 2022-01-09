#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
const int MAX_N = 200005;
const int LOG = 21;

void solve() {
    int a, b; cin >> a >> b;
    if(a == 0 || b == 0){
        cout << 0;
    }else
        cout << b / __gcd(a, b);    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1; //cin >> t;

    while(t --)
        solve();
    
    return 0;
}