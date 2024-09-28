#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b,room = 0,res =0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> a >>b;
        res = b-a;
        if(res>=2){
            room++;
        }
    }
    cout<<room<<endl;

    return 0;
}