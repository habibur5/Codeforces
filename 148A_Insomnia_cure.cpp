#include <bits/stdc++.h>
using namespace std;
int main(){
    
    
    int k,l,m,n,d, count=0;
    cin>>k>>l>>m>>n>>d;

    int ar[d+1];
    for(int i =0;i<=d+1; i++){
        ar[i]=0;
    }
    for(int i=k; i<=d; i+=k){
        ar[i] =1;
        count++;
    }
    for (int i = l; i <= d; i += l)
    {
        if (!ar[i] == 1)
        {
            ar[i] = 1;
            count++;
        }
    }
    for (int i = m; i <= d; i += m)
    {
        if (!ar[i] == 1)
        {
            ar[i] = 1;
            count++;
        }
    }
    for (int i = n; i <= d; i += n)
    {
        if (!ar[i] == 1)
        {
            ar[i] = 1;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}