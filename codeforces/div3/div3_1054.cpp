#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Be Positive 
/*int32_t main(){
    ll _{0};cin>>_;
    while (_--) {
        ll n{0};cin>>n;
        ll count0{0},count_1{0};ll x{0};
        for(ll i{0};i<n;++i){
            cin>>x;
            if(x==-1) ++count_1;
            else if(x==0) ++count0;
            else continue;
        } 
        cout<<count0+2*(count_1%2)<<"\n";
    }
    return 0;
}*/

// B - Unconventional Pairs
int32_t main(){
    ll _{0};cin>>_;
    while (_--) {
        ll n{0};cin>>n;
        vector<ll> v(n,0);
        for(ll i{0};i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll diff{0},ans{0};
        if(n==2){
            ans=v[1]-v[0];
        }else{
            for(ll i{0};i<=n-2;i+=2){
                diff=abs(v[i+1]-v[i]);
                ans=max(diff,ans);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
