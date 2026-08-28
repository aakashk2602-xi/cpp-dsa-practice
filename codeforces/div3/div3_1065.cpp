#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Shizuku Hoshikawa and Farm Legs 
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        if(n&1){cout<<0<<"\n";continue;}
        cout<<n/4+1<<"\n";
    }
    return 0;
}*/

// B - Yuu Koito and Minimum Absolute Sum
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> v(n,0);
        ll find{0};
        for(ll i{0};i<n;++i){
            cin>>v[i];
            if(i==0 or i==n-1 ){
                find=max(find,v[i]);
            }
        }
        for(ll i{0};i<n;++i){
            if(v[i]==-1){
                if(i!=0 && i!=n-1) v[i]=0;
                else v[i]=find;
            }
        }
        ll sum{0};
        for(ll i{0};i<n-1;++i) sum+=(v[i+1]-v[i]);
        cout<<abs(sum)<<"\n";
        for(auto i:v) cout<<i<<" ";
        cout<<"\n";

    }
    return 0;
}
