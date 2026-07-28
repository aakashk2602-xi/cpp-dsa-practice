#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        vector<ll> v(n,0);
        ll maximum{0};
        for(ll i{0};i<n ; ++i){
            cin >> v[i];
            maximum = max(maximum,v[i]);
        }
        ll count{0};
        for(ll i{0};i<n ; ++i){
            if (maximum==v[i]) {
                ++count;
            }
        }
        cout << count << "\n";
    }
    return 0;
}*/

//B
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        vector<ll> v(n,0);
        for(ll i{0};i<n ; ++i) cin >> v[i];
        ll is_sorted=1;
        for(ll i{0} ; i<n-1 ; ++i){
            if(v[i]>v[i+1]){
                is_sorted=0;
                break;
            }
        }
        if(is_sorted) cout << n << "\n";
        else cout << 1 << "\n";
    }
    return 0;
}*/
