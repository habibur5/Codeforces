#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int count = 1;
    while (true)
    {
        int temp = k * count;
        int res = temp / 10;

        if (temp % 10 == 0)
        {
            cout << count << endl;
            break;
        }
        else if (((res * 10) + r) == temp)
        {
            cout << count << endl;
            break;
        }
        else
        {
            count++;
        }
    }

    return 0;
}