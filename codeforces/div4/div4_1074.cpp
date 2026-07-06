#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A - Perfect Root 
/*int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll n{0},x{0};
        cin >> n;
        vector<ll> v(n,0);
        for(ll i=0 ; i<n ; i++){
            cin >> x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        cout << n*v[n-1]<<"\n";
    }
    return 0;
}*/

//B - Prefix Max 
/*int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll n{0},x{0};
        cin >> n;
        vector<ll> v(n,0);
        for(ll i=0 ; i<n ; i++){
            cin >> x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        cout << n*v[n-1]<<"\n";
    }
    return 0;
}*/

//C - Shifted MEX 
/*int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> vec(n); 
        for (auto &x: vec) cin >> x;

        sort(vec.begin(), vec.end());
        // Remove duplicates
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        n = vec.size();
        ll best = 0;
        ll current = 0;
        for (ll i = 0; i < n; i++) {
            if (i == 0 || vec[i] != vec[i-1]+1) {
                current = 0;
            }
            current++;
            best = max(best, current);
        }
        cout << best << "\n";
    }
}*/

//D. OutOfMemoryError
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, m, h;
        cin >> n >> m >> h;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        vector<ll> delta(n, 0);   // current addition relative to a[i]
        vector<ll> ver(n, 0);     // version when delta[i] was last set
        ll version = 1;           // current "live" version

        for (ll i = 0; i < m; i++) {
            ll b, c;
            cin >> b >> c;
            ll idx = b - 1;

            ll curVal = (ver[idx] == version) ? a[idx] + delta[idx] : a[idx];

            if (curVal + c <= h) {
                delta[idx] = curVal + c - a[idx];
                ver[idx] = version;
            } else {
                version++; // "reset" everything in O(1)
            }
        }

        for (ll i = 0; i < n; i++) {
            ll val = (ver[i] == version) ? a[i] + delta[i] : a[i];
            cout << val << " ";
        }
        cout << "\n";
    }
}
