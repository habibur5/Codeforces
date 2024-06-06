#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int max, min, max_index, min_index;
    max = ar[0];
    max_index = 0;
    min = ar[0];
    min_index = 0;
    // find mmax and min  value
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
            max_index = i;
        }
        if (min >= ar[i])
        {
            min = ar[i];
            min_index = i;
        }
    }
    if (min_index < max_index)
    {
        min_index = (n - 1) - min_index;
        cout << (min_index + max_index - 1) << endl;
    }
    else
    {
        min_index = (n - 1) - min_index;
        cout << (min_index + max_index) << endl;
    }
    return 0;
}