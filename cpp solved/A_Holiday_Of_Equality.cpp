#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int total=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        total+=ar[i];
    }
    int max=ar[0];
    for(int i = 1;i<n;i++){
        if(ar[i]>max){
            max = ar[i];
        }
    }
    int need = max*n;
    cout<<abs(need-total)<<endl;
    return 0;
}