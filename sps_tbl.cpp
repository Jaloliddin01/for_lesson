#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 2*1e5 + 7;
const int Log = 21;
int m[N][Log];
int log_2[N];


void solve() {

    int n, q; cin >> n >> q;
    int arr[n];

    for(int i = 2; i <= n; i++)
        log_2[i] = log_2[i/2] + 1;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        m[i][0] = arr[i];
    }

    for(int k = 1; k < Log; k++){
        for(int i = 0; i + (1 << k) - 1 < n; i++){
            m[i][k] = min(m[i][k-1], m[i + (1<<(k-1))][k-1]);
        }
    }

    for(int k = 0; k <= log2(n); k++){
        for(int i = 0; i + (1 << k) - 1 < n; i++){
            cout << m[i][k] << ' ';
        }
        cout << endl;
    }                                              
    
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        l -= 1, r -= 1;
        int k = r - l + 1;
        k = log_2[k];
        cout << min(m[l][k], m[r-(1<<k)+1][k]) << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t = 1; //cin >> t;

    while(t --)
        solve();

    return 0;
}