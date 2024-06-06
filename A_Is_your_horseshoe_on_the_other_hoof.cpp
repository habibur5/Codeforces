#include <bits/stdc++.h>
using namespace std;
int main(){
    long long ar[4];
    int count=0;
    for (int i = 0; i < 4; i++)
    {
        long long temp;
        cin>>temp;
        ar[i]=temp;
    }
    int n = sizeof(ar) / sizeof(ar[0]);
    sort(ar,ar+n);
    for(int i = 0; i<4;i++){

        if(ar[i] == ar[i+1]){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}