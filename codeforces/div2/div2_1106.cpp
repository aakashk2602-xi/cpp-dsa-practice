#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Another Puzzle from Papyrus 
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0} ,c{0};
        cin >> n >> c;
        vector<ll> a(n,0),b(n,0);
        for(ll i{0} ; i<n ; ++i) cin >> a[i];
        for(ll i{0} ; i<n ; ++i) cin >> b[i];

        ll ans{0};
        bool reorder_needed{false};
        for(ll i{0} ; i<n ; ++i){
            if( a[i] < b[i] ) reorder_needed=true;
            ans += (a[i]-b[i]);
        }
        if(reorder_needed){
            reorder_needed=false;
            ans+=c;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            for(ll i{0} ; i<n ; ++i){
                if( a[i] < b[i] ) reorder_needed = true;
            }
        }
        if(reorder_needed) cout << "-1\n";
        else cout << ans <<"\n";
    }
    return 0;
}*/

// B - Crimson Triples

