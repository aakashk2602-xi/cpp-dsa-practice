#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Fraction and Six
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        // input -->
        ll n{0},m{0};cin>>n>>m;
        string p,q;cin>>p>>q;
        
        // added the six in denominator then 
        q+="six";

        // count the characters freq of each char in both 
        // if then equal comes then yes
        vector<ll> pc(255, 0), qc(255, 0);
        for(auto& z : p) pc[z]++;
        for(auto& z : q) qc[z]++;


        //out-->
        if(pc == qc) cout << "Yes\n";
        else cout << "No\n";
        
        
        

        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// B - Stakes and Shapes
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        // input-->
        ll r{0},s{0},p{0}; cin>>r>>s>>p;

        //logic-->
        ll ans=max(r,max(p,s));
        string oppose;
        if(ans==r) oppose='P';
        else if(ans==p) oppose='S';
        else oppose='R';

        //output-->
        ll total{r+p+s};
        while(total--) cout<< oppose;
        cout<<"\n";

        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
