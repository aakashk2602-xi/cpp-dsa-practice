#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Perfect Sandwiches
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll a{0},b{0};cin>>a>>b;
        if(a<=b){
            cout<<-1<<"\n";
        }else{
            cout<<min(a-b,b)<<"\n";
        }
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// B - Replace and Compress
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        string s;cin>>s;
        int32_t n = s.size();
        ll ans{1};
        
        if(s.find("010") != string::npos || s.find("101") != string::npos){
            ans++;
        }

        if(s.find("000") != string::npos || s.find("111") != string::npos) {
            ans++;
        }

        cout<<ans<<"\n";
        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
