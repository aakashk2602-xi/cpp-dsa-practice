#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> arr(n,0);
        for(ll i{0};i<n;i++) cin>> arr[i];

        vector<ll> newarr;
        for(ll i{0};i<n;i++){
            if(arr[i]!=i+1) newarr.push_back(arr[i]);
        }
        if(newarr.empty()){
            cout<<"YES"<<"\n";
            continue;
        }
        bool flag{true};
        for(ll i=1;i<newarr.size();i++){
            if(newarr[i-1]<newarr[i]){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// B
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},m{0};cin>>n>>m;
        vector<ll> a(n,0);
        for(ll i{0};i<n;i++) cin>> a[i];

        
        ll ans=(-INF);
        if(m==1){
            sort(a);
            cout<<a.back()<<"\n";
            continue;
        }
        ll sum=0;
        priority_queue<ll> p;
        for(ll i{0};i<m-1;i++){
            p.push(a[i]);
            sum+=a[i];
        }

        for(ll i=m-1;i<n;i++){
            ll s=m*a[i];
            ans=max(ans,s-sum);

            if(a[i]<p.top()){
                sum-=p.top();
                p.pop();
                p.push(a[i]);
                sum+=a[i];
            }
        }
        cout<<ans<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
