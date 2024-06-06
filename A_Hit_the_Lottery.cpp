#include <bits/stdc++.h>
using namespace std;
int main(){
    long long doller;
    cin>> doller;
    int count = 0;
    if(doller%100==0){
        cout<<doller/100<<endl;
        return 0;
    }else{
        if(doller>100){
            count = doller / 100;
            doller = doller - (100 * count);
        }
        
    }
    if (doller % 20 == 0)
    {
        count = count + (doller / 20);
        cout<<count<<endl;
        return 0;
    }
    else
    {
        if(doller>20){
            long long dc = doller / 20;
            count = count + dc;
            doller = doller - (20 * dc);
        }
        
    }
    if (doller % 10 == 0)
    {
        count = count + (doller / 10);
        cout << count << endl;
        return 0;
    }
    else
    {
        if(doller>10){
            long long dc = doller / 10;
            count = count + dc;
            doller = doller - (10 * dc);
            
        }
    }
    if (doller % 5 == 0)
    {
        count = count + (doller / 5);
        cout << count << endl;
        return 0;
    }
    else
    {
        if(doller>5){
            long long dc = doller / 5;
            count = count + dc;
            doller = doller - (5 * dc);

        }
    }
    //if (doller % 1 == 0){
        count = count + (doller / 1);
        cout << count << endl;
        return 0;
    //}

    return 0;
}