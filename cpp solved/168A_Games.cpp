#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int times = 0;
    vector<int> h(n), g(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i] >> g[i];

        for (int j = 0; j < i; j++)
        {
            if (h[i] == g[j])
            {
                times += 1;
            }
            if (g[i] == h[j])
            {
                times += 1;
            }
        }
    }
    cout << times << endl;
    return 0;
}