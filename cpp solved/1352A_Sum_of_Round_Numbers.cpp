#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        // int count = 0;
        vector<int> v;
        if (n % 10 != 0)
        {
            v.push_back(n % 10);
            /* cout << n % 10 << " ";
            count++; */
            /* ans = n % 10;
            n -= ans; */
            n = n - (n % 10);
        }

        if (n % 100 != 0)
        {
            v.push_back(n % 100);
            n = n - (n % 100);
        }

        if (n % 1000 != 0)
        {
            v.push_back(n % 1000);
            n = n - (n % 1000);
        }

        if (n % 10000 != 0)
        {
            v.push_back(n % 10000);
        }
        if (n >= 10000 && n % 10000 == 0)
        {
            v.push_back(n);
        }
        cout << v.size() << endl;
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}