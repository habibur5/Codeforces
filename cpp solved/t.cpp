#include <bits/stdc++.h>
using namespace std;

int generateSubarrays(vector<int> &arr)
{
    int n = arr.size();
    int count=0;
    int res=0;
    int c=0;
    // Iterate over all possible starting indices
    for (int i = 0; i < n; ++i)
    {
        // Iterate over all possible ending indices
        for (int j = i; j < n; ++j)
        {
            // Print the subarray from index i to j
            for (int k = i; k <= j; ++k)
            {
                if (arr[k] == 0 && c==0)
                {
                    count++;
                    c++;
                }
                if (k > 0)
                {
                    res += arr[k - 1];
                    
                    if (res == arr[k])
                    {
                        count++;
                    }
                }
            }
            
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int dd;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        dd=generateSubarrays(arr);
        cout<<dd<<endl;
    }

    return 0;
}