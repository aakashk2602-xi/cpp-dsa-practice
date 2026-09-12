#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Odd Eraser
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> a(n,0);
        for(ll i{0};i<n;++i) cin>>a[i];
        cout<<gcd(a[0],a[n-1])<<"\n";
    }
}*/

// B - Carrot Chopdown (Easy Version)
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},m{0};cin>>n>>m;
        vector<ll> v(n,0);
        for(ll i{0};i<n;i++) cin>>v[i];

        sort(v);
        ll everuncount{1},evecount{1};
        ll oddruncount{1},oddcount{1};
        for(ll i{0};i<n-1;++i){
            if(v[i]%2==0){
                if(v[i]==v[i+1]) everuncount++;
                else everuncount=1;
                evecount=max(evecount,everuncount);
            }else{
                if(v[i]==v[i+1]) oddruncount++;
                else oddruncount=1;
                oddcount=max(oddcount,oddruncount);
            }
        }
        //cout<<oddcount<<" "<<evecount<<"\n";
        if(oddcount>=evecount){
            ll res{0};
            for(ll i{0};i<n;++i){
                v[i]--;
                if(v[i]==1) ++res;
            }
            cout<<n+res<<"\n";
        }else{
            ll res{0},fres{0};
            for(ll i{0};i<n;++i){
                if(v[i]>=2) {v[i]-=2;++fres;}
                if(v[i]==2) ++res;
            }
            cout<<n+res<<"\n";
        }
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}
