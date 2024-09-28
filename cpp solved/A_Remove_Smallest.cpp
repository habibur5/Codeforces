#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n, count=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);

        for(int i = 1; i<n; i++){
            if(arr[i-1]>arr[i] && abs(arr[i-1]-arr[i]<=1 )){
                arr[i] = 0;
            }
            else if (arr[i] >= arr[i-1] && abs(arr[i] - arr[i-1] <= 1))
            {
                arr[i-1] =0;
            }
            else{
                cout << "NO" << endl;
                count++;
                break;
            }
        }
            if(arr[n-1]>0 && count !=1){
                cout<<"YES"<<endl;
            }

    return 0;
}