#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
const int MAX_N = 200005;
const int LOG = 21;
int a[MAX_N];
int m[MAX_N][LOG];
int logtwo[MAX_N];

int query(int l, int r){
    int len = r - l + 1;
    int k = logtwo[len];
    return min(m[l][k], m[r - (1 << k) + 1][k]);
}

void solve() {
    
    int n; cin >> n;
    int q; cin >> q;

    for(int i = 2; i <= n; i++){
        logtwo[i] = logtwo[i/2] + 1;
    }

    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[i][0] = a[i];
    }

    for(int k = 1; k < LOG; k++){
        for(int i = 0; i + (1 << k) - 1 < n; i++){
            m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
        }
    }

    for(int i = 1, l, r; i <= q; i++){
        cin >> l >> r;
        cout << query(l-1, r-1) << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1; //cin >> t;

    while(t --)
        solve();
    
    return 0;
}