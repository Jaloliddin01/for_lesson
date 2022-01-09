#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb(x) push_back(x)
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const int mod = 1e9+7;
const int N = 2*1e5+10;

bool isvowel(char c) {
    return c == 'A' || c == 'O' || c == 'U' || c == 'E' || c == 'I' ||
           c == 'Y' || c == 'a' || c == 'o' || c == 'u' || c == 'e' ||
           c == 'i' || c == 'y'; 
}

int arr[N], n;

void dfs(string ans, int l, int r) {
    
    for(int i = l; i <= r; i++) {
        if(arr[i] == -1) {
            cout << ans + to_string(arr[i]);
            return;
        }

        dfs(ans + to_string(arr[i]), l, r);
    }

}

void solve() {
    
    /*int l = 2, r = 2; cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];

    string ans;

    for(int i = 0; i < n; i++) {
        if(arr[i] == -1)
            break;

        l = r;
        r = arr[i] + r - 1;

        dfs(to_string(arr[i]) + "->", l, r);
    }*/

    int n, x, y, z, a, b, c, ans; cin >> n;

    cin >> a >> b >> c >> ans >> x >> y >> z;

    if((a + b + c) % 2 == (z + y + x)){
        cout << ans;
    }else cout << !ans;
    
}

/* test cases
*/

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    //precalc();

    int t = 1; //cin >> t;

    while(t --){
        solve();
        //cout << '\n';
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    
    return 0;
}