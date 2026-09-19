#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Slimes on a Line
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> v(n,0);
        for(ll i{0};i<n;i++) cin>>v[i];
        sort(v);
        ll avg = v[0] + (v[n-1]-v[0])/2 ;
        cout<<max(abs(avg-v[0]),abs(avg-v[n-1]))<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}


// C1 - We Be Flipping (Easy Version)
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll>v(n,0);
        for(ll i{0};i<n;i++) cin>> v[i];

        ll countpos{0};
        for(ll i{0};i<n;i++) if(v[i]>0) ++countpos;


        
        if(countpos==0) cout<<"0\n \n";
        else if(countpos==n) cout<<"1\n"<<n<<"\n";
        else cout<<"\nWhat the heck. I'll solve this tomorrow\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
