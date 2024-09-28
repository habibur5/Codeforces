#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, police = 0;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            police += arr[i];
        }
        else if (arr[i] == -1 && police == 1)
        {
            police-=1;
        }
        else if (arr[i] == -1 && (police == 0 || police>=1))
        {
            if (police > 0)
            {
                police--;
                continue;
            }
            
            count += 1;
        }
    }
    cout << count << endl;

    return 0;
}