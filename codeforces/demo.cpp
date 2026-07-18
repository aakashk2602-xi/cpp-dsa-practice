#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll popcount(ll x){
    ll start = x/2;
    ll popcount{0};
    for(ll i{start} ; i >= 0 ; --i){
        ll pow2 = pow(2,i);
        if( pow2 <= x ){
            x-= pow2 ;
            ++popcount;
        }
    }
    return popcount;
}
int32_t main(){
    ll x = 0;
    cout << popcount(x);
}