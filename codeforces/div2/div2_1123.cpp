#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Turn Into a Palindrome  
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        char c;cin>>c;
        string s;cin>>s;
        string rev_s(s.rbegin(),s.rend());
        ll count{0};
        for(ll i{0};i<n/2;i++){
            if(s[i]!=rev_s[i]){
                if(s[i]!=c and rev_s[i]!=c) count+=2;
                if(s[i]==c) count++;
                if(rev_s[i]==c) count++;
            }
        }
        cout<<count<<"\n";

        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// B - Fashionable Array -- Saw solution
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll>v(n+1,0);
        map<ll,ll> mpp;
        for(ll i{1};i<=n;i++){ cin>>v[i]; mpp[v[i]]++; }

        ll now=0;
        while(now!=n){
            for(int i=100;i>=1;i--){
                if(mpp[i]){
                    mpp[i]--;
                    cout<<i<<' ';
                    now++;
                }
            }
        }
        cout<<endl;
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
