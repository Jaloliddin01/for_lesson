#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n, k = 2;
    string s;

    cin >> n;

	if(n == 1)
      	s += '1';
    else
      	s += "10";

    for(int i = 2; i < n; i++)
    {
        if(k == 0){
            s += '0';
            k = 2;
        } else {
            s += '1';
            k--;
        }
    }

    cout << s;

    return 0;
}

// 101002