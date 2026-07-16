#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// rotation by k element
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0} ,k{0};
        string s;
        cin >> n >> k >> s;
        vector<ll> v(n,0);

        for( ll i{0} ; i < n ; ++i ) cin >> v[i];
        k%=n; // normalization

        vector<ll> temp(k,0);
        if (s == "right") {
            for (ll i = n - k; i < n; ++i) temp[i - (n - k)] = v[i];
            for (ll i = n - k - 1; i >= 0; --i) v[i + k] = v[i];
            for (ll i = 0; i < k; ++i) v[i] = temp[i];
        }else {
            for ( ll i{0} ; i < k ; ++i ) temp[i] = v[i];
            for ( ll i{k} ; i < n ; ++i ) v[i-k] = v[i];
            for ( ll i{0} ; i < k ; ++i ) v[n-k+i] = temp[i];
        }
        for( auto i : v ) cout << i << " ";
        cout << "\n";
    }
}*/

// move all zeros to the end of the array
/*int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        vector<ll> v(n,0);
        for(ll i{0} ; i < n ; ++i) cin >> v[i];

        ll j{n-1} , i{0};
        while(i<=j && i<n && j>=0){
            if(v[j]==0){
                --j;
                continue;
            }
            if( v[i]==0 and v[j]!=0 ){
                swap(v[i],v[j]);
                --j;
            }
            ++i;
        }
        for(auto i : v) cout << i << " ";
        cout << "\n";
    }
}*/

// 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0},m{0};
        cin >> n >> m;
        vector<ll> v1(n,0),v2(m,0);
        for(ll i{0} ; i < n ; ++i) cin >> v1[i];
        for(ll i{0} ; i < m ; ++i) cin >> v2[i];
    }
}