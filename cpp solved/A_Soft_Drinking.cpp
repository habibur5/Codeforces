#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, total_drink, total_slices_limes;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    total_drink = k*l;
    total_slices_limes = c*d;
    int drink_toast = total_drink/nl;
    int slices_toast = total_slices_limes/1;
    int gram_toast = p/np;
    if(drink_toast<slices_toast && drink_toast<gram_toast){
        cout<<drink_toast/n<<endl;
    }else if(slices_toast<drink_toast && slices_toast<gram_toast){
        cout<<slices_toast/n<<endl;
    }else{
        cout<<gram_toast/n<<endl;
    }
    return 0; 

}