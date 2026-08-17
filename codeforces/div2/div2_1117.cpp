#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A 
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin>>_;
    while(_--){
        ll n{0},m{0};
        cin>>n>>m;
        set<char> w,a;
        for(ll i{0};i<n;++i){
            string x;
            cin>>x;
            w.insert(x[0]-32);
        }
        for(ll i{0};i<m;++i){
            string x;
            cin>>x;
            for(auto i:x){
                a.insert(i);
            }
        }
        if(w==a) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}*/

// B
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin>>_;
    while(_--){
        ll n{0},m{0};
        cin>>n>>m;
        vector<ll> a(n,0),b(m,0);
        for(ll i{0};i<n;i++) cin>>a[i];
        for(ll i{0};i<m;i++) cin>>b[i];
        ll sum1{n},sum2{m};
        for(ll i{0};i<n-1;i++){
            ll diff=a[i]-a[i+1];
            sum1+=diff;
        }
        sum1+=a[n-1];
        for(ll i{0};i<m-1;i++){
            ll diff=b[i]-b[i+1];
            sum2+=diff;
        }
        sum2+=b[m-1];
        if(sum1>=sum2) cout<<1;
        else cout<<2;
        cout<<"\n";
    }
    return 0;
}*/
