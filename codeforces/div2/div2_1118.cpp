#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Odd Eraser
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> a(n,0);
        for(ll i{0};i<n;++i) cin>>a[i];
        cout<<gcd(a[0],a[n-1])<<"\n";
    }
}*/

// B - Carrot Chopdown (Easy Version) --Mehul's Help!!
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},m{0};cin>>n>>m;
        vector<ll> v(n,0);
        vector<ll> f(m+1,0);
        for(ll i{0};i<n;i++){
            cin>>v[i];
            f[v[i]]++;
        }

        ll ans{0};
        ll shorter_than_currX{0};
        for(ll x{1};x<=m;x++){
            shorter_than_currX+=f[x-1];     //prefix freq sum
            ll tmp=0;
            tmp= n-shorter_than_currX;
            if(2*x<=m) tmp+=f[2*x];

            ans=max(ans,tmp);
        }
        cout<<ans<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
