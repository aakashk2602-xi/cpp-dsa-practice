#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

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

// D - Mex Multiset
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};
        cin>>n;
        vector<ll> v(n,0);
        vector<ll> index;
        for(ll i{0};i<n;++i) cin>>v[i];
        ll count0{0};
        for(ll i{0};i<n;++i){
            if(v[i]==0) {++count0;index.push_back(i);}
        }
        if(count0==0){
            cout<<"Yes\n";
            string ans(n, 'A');
            cout<<ans<<"\n";
        }else if(count0==1){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
            bool flagA=true;
            string ans;
            for(ll i{0};i<n;++i){
                if(flagA && v[i]==0){
                    flagA=false;
                    ans+="A";
                }else if(!(flagA) && v[i]==0){
                    ans+="B";
                }else{
                    ans+="C";
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}*/
