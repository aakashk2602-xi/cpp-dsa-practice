#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0},sum{0};
        cin >> n;
        vector<ll> weights(n,0);
        for ( ll i{0} ; i < n ; ++i ){
            cin >> weights[i];
            sum += weights[i];
        }
        ll avg = ceil(double(sum)/double(n));

        ll flag{1};
        for ( ll i{0} ; i < n ; ++i ){
            if(avg == weights[i]){
                flag = 0;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}