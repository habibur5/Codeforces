#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr+3);
    cout << (arr[2] - arr[1]) + (arr[1] - arr[0])<<endl;
    return 0;
}