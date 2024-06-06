#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1; i<=n; i++){
        int temp;
        cin>>temp;
        ar[temp] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if(i==n){
            cout << ar[i];
        }else{
            cout << ar[i] << " ";
        }
    }
    return 0;
}