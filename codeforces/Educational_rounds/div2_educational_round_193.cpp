#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()

// A - The Best Card
/*bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int32_t main(){
    ll _{0};cin >> _;
    while(_--){
        ll n{0};cin >> n;
        if((n+1)&1 && isPrime(n+1)) cout << "YES\n";
        else cout << "NO\n";
    }
}*/

// B - Hypercarp and the Control Panel --> Mehul's Solution on Youtube
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> v(n,0);
        for(ll i{0};i<n;i++) cin>>v[i];

        ll ans{0};
        for(ll i{0};i<n;i++)
            if(i==0 || v[i-1]!=v[i]) ++ans;

        ll extra{0};
        for(ll j{0};j<2;j++){
            for(ll i{0};(i+3)<n;i++){
                //aabb = +2 , aabc = +1 , __aab = +1
                if(v[i]==v[i+1] && v[i+2]==v[i+3] && v[i]!=v[i+2]) extra=max(extra,ll(2));
                if(v[i]==v[i+1] && v[i+2]!=v[i] && v[i+3]!=v[i]) extra=max(extra,ll(1));
            }
            if(n>=3 && v[n-1]!=v[n-2] && v[n-2]==v[n-3]) extra=max(extra,ll(1));
            reverse(all(v));
        }
        cout<<ans+extra<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}*/
