#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Subset Selecting
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        // input-->
        ll n{0},k{0};cin>>n>>k;

        // counter array-->
        vector<ll> freq(101,0);
        for(ll i{0};i<n;i++){
            ll x=0;cin>>x;
            ++freq[x];
        }


        ll s{0};
        vector<ll> ans;
        for(ll i{0};i<=n;++i){
		    if( !(freq[i]) or (s + freq[i] < k)){
		    	ans.push_back(i);
			    continue;
		    }
		    s += freq[i] - k;
	    }


        //output-->
        if(ans.size()==0) cout<<"0\n";
        else cout<<ans[0]<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
