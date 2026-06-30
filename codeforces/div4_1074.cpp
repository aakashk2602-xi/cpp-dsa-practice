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
    ll t{0};
    cin >> t ;
    while (t--) {
        ll n , m , h;
        cin >> n >> m >> h;
        vector<ll> v(n,0);
        for( ll i{0} ;i<n ; i++){ cin >> v[i]; }
        vector<ll> cpy_v=v;
        for( ll i{0} ; i < m ; i++ ){
            ll b,c;
            cin >> b >> c;
            if( v[b-1]+c<=h ){
                v[b-1]+=c;
            }else{
                v=cpy_v;
            }
        }
        for(ll i : v){
            cout << i << " ";
        }
        cout << "\n";
    }
}