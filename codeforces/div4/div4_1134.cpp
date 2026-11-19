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
        ll n{3};
        vector<ll>v(n,0);
        for(ll i{0};i<n;i++) cin>> v[i];
        sort(v);
 
        if(v[0]+1==v[1] && v[1]+1==v[2]) cout<< "Yes\n";
        else cout<<"No\n";
        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// B
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        string s;cin>>s;
 
 
 
        ll ans{0};
        if(s[0]!='R') ans++;
        for(ll i{1};i<n;i++) if(s[i]==s[i-1]) ans++;
 
        cout<<ans<<"\n";
 
        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// C 
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll>v(n,0);
        for(ll i{0};i<n;i++) cin>> v[i];
 
        map<ll,ll> freqmap;
        for(auto i: v) freqmap[i]++;
 
        int32_t see{0};
        //leftvec
        vector<ll> leftvec;
        leftvec=v;
        sort(leftvec);
        leftvec.erase(unique(leftvec.begin(),leftvec.end()),leftvec.end());
        see = leftvec.size();
        //freqmap 1 from unique decrease
        for(auto& [key,val]:freqmap) val--;
 
 
        //rightvec
        vector<ll> rightvec;
        for(auto& [key,val]:freqmap){
            if(val>0){
                rightvec.push_back(key);
                val--;
            }
        }
        reverse(all(rightvec));
        see+=rightvec.size();
 
 
        //left ke end mei hi add kar do
        for(auto& [key,val]:freqmap){
            if(val>0){
                while(val--){
                    leftvec.push_back(key);
                }
            }
        }
 
        // result
        cout<<see<<"\n";
        for(auto i:leftvec) cout<<i<<" ";
        for(auto i:rightvec) cout<<i<<" ";
        cout<<"\n";
 
 
        
 
        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
