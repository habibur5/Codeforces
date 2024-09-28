#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z, sum;
    cin>>x>>y>>z>>sum;
    int arr[4] = {x,y,z,sum};
    sort(arr, arr + 4);

    int a,b,c;

    b=((arr[0]+arr[2])-(arr[1]))/2;
    a=arr[0]-b;
    c= arr[2]-b;
    cout<<a<<" " <<b<<" "<<c<<endl;

    return 0;
}