#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, count = 0;
    cin>>n;
    int a[n+1];
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        a[i] = temp;
    }
    for(int i =0; i<n; i++){
        if(a[i]==1){
            count++;
            break;
        }
    }
    if(count>0){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
    return 0;
    
}