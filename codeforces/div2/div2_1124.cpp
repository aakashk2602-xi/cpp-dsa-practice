#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - 
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},k{0};cin>>n>>k;
        ll ans{0};
        for(ll i{1};i<=n-k;i++){
            ans+=(pow(2,i));
        }
        ans+=(2*k);
        cout<<ans<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// B - KiaKio and Squared Numbers - Mehul.27's Solution
/*ll calc(ll num){
    ll s{0};
    while(num){
        ll d=num%10;
        s+=(d*d);
        num/=10;
    }
    return s;
}
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        map<ll,ll> mpp;
        ll ans{0};
        while(n--){
            ll num{0};cin>>num;
            for(ll j=1;j<=10000;j++) num=calc(num);
            mpp[num]++;
        }
        for(auto q:mpp){
            ll t{q.second};

            if(t > 1) ans+=(t*(t-1)/2);
        }
        cout<<ans<<"\n";    
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
