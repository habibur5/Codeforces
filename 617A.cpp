#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t%5==0){
        cout<<t/5<<endl;
    }else{
        cout<<(t/5)+1<<endl;
    }
    return 0;
}