#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A
/*int32_t main(){
	ll _{0};
	cin>>_;
	while(_--){
	    int32_t n{0},sum{0};cin>>n;
		vector<ll> v(n,0);
        ll x{INT_MAX};
        for(int32_t i{0};i<n;++i){
            cin>>v[i];
            x=min(x,v[i]);
            sum+=x;
        }
        
        cout<<sum<<"\n";
	}
    return 0;
}*/

// B
/*int32_t main(){
	ll _{0};
	cin>>_;
	while(_--){
	    ll n{0};cin >> n;
        vector<int> a(n,0), c(n,0);
        for (int i = 0; i < n; i++) cin>>a[i];
        set<int> s;
        for(ll i{0};i<n;++i) {
            ll x;
            cin>>x;
            s.insert(x);
        }
        
        bool y{true};
        for(ll i{0}; i < n; ++i) {
            auto it=s.lower_bound(a[i]);
            if (it==s.end()) {
                y=false;
                break;
            }
            c[i]=*it;
            s.erase(it);
        }
        if(!y){
            cout<<-1<<'\n';
            continue;
        }
        ll ans{0};
        for(ll i{0};i<n;++i) {
            for(ll j{i+1};j<n;++j) {
                if(c[i]>c[j]) {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
	}
    return 0;
}*/

// C