#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const int MOD = 1e9+7;

void solve() {
    
    string s; cin >> s;
    s += '$';
    int n = s.size();
    vector<int> p(n), c(n);

    {
        vector<pair<char, int>>a(n);
        for(int i = 0; i < n; i++)
            a[i] = {s[i], i};
        sort(all(a));

        for(int i = 0; i < n; i++){
            p[i] = a[i].second;
            cout << a[i].first << ' ';
        }

        cout << endl;
        
        for(int i = 0; i < n; i++)
            cout << p[i] << ' ';

        cout << endl;

        c[p[0]] = 0;

        for(int i = 1; i < n; i++){
            if(a[i].first == a[i-1].first)
                c[p[i]] = c[p[i-1]];
            else
                c[p[i]] = c[p[i-1]] + 1;
        }
        
        for(int i = 0; i < n; i++)
            cout << p[i] << ' ';

        cout << endl;
    }

    int k = 0;

    while((1 << k) < n) {
        vector<pair<pair<int, int>, int>>a(n);
        for(int i = 0; i < n; i++){
            a[i] = {{c[i], c[(i + (1 << k)) % n]}, i};
        }

        sort(all(a));

        for(int i = 0; i < n; i++){
            p[i] = a[i].second;
        }

        c[p[0]] = 0;

        for(int i = 1; i < n; i++){
            if(a[i].first == a[i-1].first)
                c[p[i]] = c[p[i-1]];
            else
                c[p[i]] = c[p[i-1]] + 1;
        }
        k++;
    }

    for(int i = 0; i < n; i++)
        cout << p[i] << ' ';

    cout << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1; //cin >> t;

    while(t --)
        solve();

    cout << endl;
    
    return 0;
}
