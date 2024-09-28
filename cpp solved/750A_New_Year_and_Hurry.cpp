#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0, left;
    left = 240 - k;
    for(int i=1; i<=n; i++){
        int times = i*5;
        if(times<= left){
            count++;
            left -= times;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;

    return 0;
}