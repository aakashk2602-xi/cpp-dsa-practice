#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Slimes on a Line
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> v(n,0);
        for(ll i{0};i<n;i++) cin>>v[i];
        sort(v);
        ll avg = v[0] + (v[n-1]-v[0])/2 ;
        cout<<max(abs(avg-v[0]),abs(avg-v[n-1]))<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// B - Absolute Cinema
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll>a(n,0),b(n,0);
        for(ll i{0};i<n;i++) cin>> a[i];
        for(ll i{0};i<n;i++) cin>> b[i];
        
        if(n==1){
            cout<<a[0]+b[0]<<"\n";
        }else{
            for(ll i{0};i<n;i++){
                if(a[i]>b[i]) swap(a[i],b[i]);
            }
            ll sum_b{0};
            ll a_max{-1};
            for(ll i{0};i<n;i++){
                if(a_max<a[i]) a_max=max(a_max,a[i]);
                sum_b+=b[i];
            }
            cout<<sum_b+a_max<<"\n";
        }

        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// C1 - We Be Flipping (Easy Version)
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll>v(n,0);
        for(ll i{0};i<n;i++) cin>> v[i];

        ll parity{0};
        vector<ll> ans;
        for(ll i{n-1};i>=0;i--){
            if(parity==1) v[i]=-v[i];
            if(v[i]>0){
                ans.push_back(i);
                parity^=1;
            }
        }
        int32_t space=ans.size();
        cout<<space<<"\n";
        for(int32_t i{0};i<space;i++) cout<<ans[i]+1<<" ";
        cout<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
