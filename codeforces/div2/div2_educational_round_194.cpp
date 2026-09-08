#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Monocarp's Contest
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> a(n,0);
        for(ll i{0};i<n;++i) cin>>a[i];
        ll count0{0};
        for(ll i{0};i<n;++i){
            if(a[i]==0) count0++;
        }
        if(count0<2) cout<<"-1\n";
        else{
            if(a[0]==0 && a[n-1]==0) cout<<"0\n";
            else if((a[0]==0) ^ (a[n-1]==0)) cout<<"1\n";
            else cout<<"2\n";
        }
    }
}*/

// B - Monocarp and Projects
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll x{0},y{0},k{0};
        cin>>x>>y>>k;
        ll d{y - x};
        ll ans{0};
        ll cnt=min(k,max(0LL, d-x+1));
        for(ll i{0};i<cnt;++i){
            ans+=d%(x+i);
        }
        ans+=(k-cnt)*d;
        cout<<ans<<'\n';
    }
}*/
