#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const int N = 2 * 1e5 + 10;

int tree[N];
int n;

void sum(int l, int r) {
    int ans = 0;
    while(r >= l)
        ans += tree[r], r -= r & -r;
    cout << ans << endl;
}

void update(int k, int x) {
    while(k <= n)
        tree[k] += x, k += k & -k;
}

void solve() {

    int q; cin >> n >> q;
    
    for(int i = 1; i <= n; i++)
        cin >> tree[i];

    while(q --){
        int k, l, r; cin >> k >> l >> r;

        if(k == 1)
            update(l, r);
        else
            sum(l, r);
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
