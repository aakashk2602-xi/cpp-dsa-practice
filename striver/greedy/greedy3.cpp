#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

//  Valid Parenthesis String
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        string s(n,'0');cin>>s;
        ll minimum{0},maximum{0};
        for(ll i{0};i<n;i++){
            if(s[i]=='('){ ++minimum; ++maximum; }
            else if(s[i]==')'){ --minimum; --maximum; }
            else{ --minimum; ++maximum; }

            if(minimum<0) minimum=0;
            if(maximum<0) { cout<<"No\n"; continue; }
        }
        if(minimum==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// Candy