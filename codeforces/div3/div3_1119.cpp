#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// A - Moo Language School
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},k{0};cin>>n>>k;
        string s;cin>>s;
        ll ans{0};
        for(ll i{0};i<n;i+=k){
            bool flag{false};
            for(ll j{i};j<i+k;++j){
                if(s[j]=='0') {flag=true;}
            }
            if(!flag){ans++;}
        }
        cout<<ans<<"\n";
    }
    return 0;
}*/

// B - Minus Two
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};
        cin>>n;
        vector<ll> v(n,0);
        for(ll i{0};i<n;++i) cin>>v[i];
        ll a{0},b{0},c{0};
        for(ll i{0};i<n;++i){
            if(v[i]%2!=0){
                ++a;
            }else if(v[i]%2==0 && (v[i]/2)%2==0){
                ++b;
            }else{
                ++c;
            }
        }
        
        cout<<max(a,max(b,c))<<endl;
    }
    return 0;
}*/
