#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,b;
    cin>>r>>b;
    int max, left, min;
    if(r>b){
        max = b;
        left = r-b;
    }else{
        max = r;
        left = b-r;
    }
    min = left/2;
    cout<<max<<" "<<min<<endl;
    return 0;
}