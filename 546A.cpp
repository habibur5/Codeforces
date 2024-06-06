#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, w;
    long long n;
    cin>>k>>n>>w;
    int total_doller = (k*w*(w+1))/2;
    int borrow = total_doller - n;
    if(total_doller<n){
        cout<<0<<endl;
    }else cout<<borrow<<endl;
    return 0;
}