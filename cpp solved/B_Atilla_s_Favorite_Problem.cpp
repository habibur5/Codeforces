#include <bits/stdc++.h>
using namespace std;
// #define forn(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
//#define rall(v) v.rbegin(), v.rend()

// #define pb push_back
//#define sz(a) (int)a.size()

    int main()
    {
        {
            int t = 1;
            cin >> t;
            while (t--)
            {
                int n;
                string s;
                cin >> n >> s;
                sort(all(s));
                cout << s.back() - 'a' + 1 << "\n";
            }
        }

        return 0;
    }
