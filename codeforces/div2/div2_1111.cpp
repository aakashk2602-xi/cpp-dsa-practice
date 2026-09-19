#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// B - Yet Another Constructive
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},k{0},m{0};
        cin>>n>>k>>m;
        if(m<k){
            cout<<"NO\n";
            continue;
        }

        cout << "YES\n";
        for(ll i{1};i<=n;i++) cout<<(i%k==0? m-k+1:1)<<" ";
        cout<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
