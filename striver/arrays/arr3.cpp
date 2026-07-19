#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Count Maximum Consecutive One's in the array
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        ll arr[n];
        for(ll i{0} ; i < n ; ++i) cin >> arr[i];
        ll count{0},ans{0};
        for(ll i{0} ; i < n ; ++i) {
            if( arr[i] == 1 ){
                ++count;
            }else {
                count=0;
            }
            ans = max(count,ans);
        }
        cout << ans << "\n"; 
    }
}*/

// Find the number that appears once, and the other numbers twice
/*Two important properties of XOR are the following:
    -> XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
    -> XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a. ←Property 2*/
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        ll arr[n];
        for(ll i{0} ; i < n ; ++i) cin >> arr[i];
        ll ans{0};
        for(ll i{0} ; i < n ; ++i) {
            ans^=arr[i];
        }
        cout << ans << "\n"; 
    }
}*/
