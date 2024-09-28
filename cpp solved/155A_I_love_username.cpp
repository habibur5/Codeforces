#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, preview;
    cin>>n;
    int count=0;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max= arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]> max){
            max = arr[i];
            count++;
        }
        if(arr[i]< min){
            min= arr[i];
            count++;
        }
    }
    cout<<count<<endl;
    

    return 0;
}