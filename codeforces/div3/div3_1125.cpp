#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - In Search of Convenience 
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll x{0},y{0},R{0};cin>>x>>y>>R;
        cout<<x+R << " "<<y<<"\n";
        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// B - Did Not Go to Print
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        string s;cin>>s;
        vector<ll> ans;
        vector<ll> memory;
        ll num{1};
        for(ll i{0};i<n;i++){
            ll prev;
            if(s[i]=='1'){
                memory.push_back(i+1);
            }else if(s[i]=='2'){
                if(memory.size()==0){
                    //i=prev;
                }else{
                    ans.push_back(i+1);
                    memory.pop_back();
                    //prev = i+1;
                    //i--;
                }
            }
            else{
                continue;
            }
        }
        for(auto i:memory){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<"\n";
        for(auto i:ans) cout<<i<<" ";
        cout<<"\n";
        
        
        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// C - Unrequited Love 
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> a(n,0);
        for(ll i{0};i<n;i++)cin>>a[i];

        n-=4;
        vector<ll> v(n);
        map<ll,ll> mp;
        ll ans=0;
        for(ll i{0};i<n;i++){
            v[i]=a[i]+a[i+2]-a[i+4];
            ans+=mp[v[i]];
            mp[v[i]]++;
        }
 
        for(ll i{0};i<n-2;i++){
            if(v[i] == v[i+2]) ans--;
        }

        for(ll i=0;i<n-4;i++){
            if(v[i] == v[i+4]) ans--;
        }

        cout<<ans<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
