#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// fibonacci
// Time -> O(n) and recursion stack space & array space -> O(n) + O(n)
/*ll f(ll n ,vector<ll>& dp){
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];
    return dp[n]= f(n-1,dp)+f(n-2,dp);
}

int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll>dp(n+1,-1);
        cout<<f(n, dp)<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        ll prev2{0} , prev1{1};
        for(ll i{2};i<=n;i++){
            ll curri= prev1 + prev2;
            prev2=prev1;
            prev1=curri;
        }
        cout<<prev1<<"\n";
    }
}

// 