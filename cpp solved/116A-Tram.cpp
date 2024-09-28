#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a,b, p=0, capacity=0;
    cin>>n;
    for(int i= 0;i<n; i++){
        cin>>a>>b;
        p = abs(p-a) + b;
        if (p > capacity)
        {
            capacity = p;
        }
    }
        cout<<capacity<<endl;
    return 0;
}