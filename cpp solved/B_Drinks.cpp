#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double volume=0;
    for(int i =0; i<n; i++){
        double temp;
        cin>>temp;
        volume += temp;
    }
    cout<<(volume/n)<<endl;
    return 0;
}