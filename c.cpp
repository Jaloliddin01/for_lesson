#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MAX 750005

const int mod = 1e9+7;
const int N = 5 * 1e5 + 1;
bool bol[MAX];
vector<int> vec[MAX];
void dfs(int v)
{
    bol[v] = true;
    for (auto i : vec[v]) {
        if (!bol[i]) {
            dfs(i);
        }
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int u, v;
    for (int i = 0; i < k; i++) {
        cin >> u >> v;
        vec[u].push_back(v);
    }
    v = 0;
    for (int i = 0; i < n; i++) {
        if (!bol[i]) {
            dfs(i);
            v = i;
        }
    }
    fill(bol, bol+n, 0);
    dfs(v);
    for (int i = 0; i < n; i++) {
        if (!bol[i]) {
            cout << -1;
            return;
        }
    }
    cout << v;
}

/* test cases
    5 9 1 1 1
    1 2 1 1 1

*/

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1; //cin >> t;

    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}