#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// 1622A - Construct A Rectangle div2 120 A
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        vector<ll> v(3,0);
        for(ll i{0};i<3;i++) cin>>v[i];
        sort(v);
        if(v[0]==v[1]){
            if(v[2]%2==0) cout<<"Yes\n";
            else cout<<"No\n";
            continue;
        }else if (v[1]==v[2]) {
            if(v[0]%2==0) cout<<"Yes\n";
            else cout<<"No\n";
            continue;
        }
        if(v[0]+v[1]==v[2]) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}