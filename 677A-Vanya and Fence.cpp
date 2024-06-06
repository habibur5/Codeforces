#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin>>n>>h;
    int ph[n+1];
    int witdth = 0;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        ph[i] = temp;
        if (ph[i] > h)
        {
            witdth += 2;
        }
        else
        {
            witdth += 1;
        }
    }
    cout << witdth<<endl;

        return 0;
}