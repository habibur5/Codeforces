#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, preview, min;
    cin >> n;
    int count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            preview = arr[i];
            min = arr[i];
        }
        else if (arr[i] > preview)
        {
            count++;
            preview = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}