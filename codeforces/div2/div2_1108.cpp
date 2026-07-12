#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    for(ll i{0} ; i<n ; ++i)
        cout << (i%2? i:i+2) <<" " ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll _{0};
    cin >> _ ;
    while (_--) {
        solve();
        cout << "\n";
    }
}