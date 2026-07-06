#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A
/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> h(n,0);
        for( ll i=0 ; i < n ; i++ ){
            cin >> h[i];
        }
        ll highest{-1},lowest{INT_MAX};
        for ( auto i : h ) {
            if( i > highest ){
                highest = i;
            }
            if( i < lowest ){
                lowest =i;
            }
        }
        cout << highest - lowest + 1<< "\n";
    }
}*/