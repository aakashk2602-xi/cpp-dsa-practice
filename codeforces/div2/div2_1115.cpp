#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin>>n;
        vector<ll>v(n,0);
        for(ll i{0} ; i<n;++i) cin>>v[i];

        map<ll,ll> hashmap;
        for(auto i:v) ++hashmap[i];

        vector<ll> ans(n,0);
        auto map_n{hashmap.size()};
        ll i{0},previous_element{0};
        while(true){
            ll count{0};
            for(auto& [num,freq]:hashmap){
                if(freq!=0){
                    --freq;
                    ans[i]=num;
                    ++i;
                }else {
                    ++count;
                }
            }
            if(count>=map_n-1){
                count=0;
                break;
            }
        }
        for(auto& [num,freq]:hashmap){
            if(freq!=0){
                ans[i]=num;
                break;
            }
        }
        ll sum{0};
        for(auto it:ans) sum+=it;
        cout<<sum<<"\n";
    }
    return 0;
}