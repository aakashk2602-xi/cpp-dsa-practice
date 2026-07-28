#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A - Threshold Movement
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0},L{0},R{INT64_MAX};
        cin >> n;
        for ( ll i{1} ; i <= n ; ++i ){
            ll w{0};
            cin >> w;
            if(i&1) R = min(R,w);
            else L = max(L,w);
        }
        cout << ( n%2==0 && L+2<=R ? "YES\n" : "NO\n" );
    }
    return 0;
}*/

//B - 