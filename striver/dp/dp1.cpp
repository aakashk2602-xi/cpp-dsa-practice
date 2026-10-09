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
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        if(n==0) {cout<<0<<"\n"; continue;}
        ll prev2{0} , prev1{1};
        for(ll i{2};i<=n;i++){
            ll curri= prev1 + prev2;
            prev2=prev1;
            prev1=curri;
        }
        cout<<prev1<<"\n";
    }
}*/

// climbing stairs
/*    int solve(int n , vector<int> & dp){
        //base case 
        if(n==0 || n==1) return 1;

        //check if dp is not -1
        if(dp[n]!=-1) return dp[n];

        //store
        return dp[n] = solve(n-1,dp) + solve(n-2,dp);
*/

// frog jump
/*ll solve(ll ind , vector<ll>&dp, vector<ll>& a){
    // base case
    if(ind==0) return 0;

    //check if dp[n] is not -1
    if(dp[ind]!=-1) return dp[ind];

    //recurrence relation
    ll left{solve(ind-1,dp,a)+abs(a[ind]-a[ind-1])};
    ll right{0};
    if(ind>1) ll right = solve(ind-2,dp,a)+abs(a[ind]-a[ind-2]);

    // store
    return dp[ind]=min(left , right);
}
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> v(n,0);
        for(ll i{0};i<n;i++) cin>> v[i];
        vector<ll> dp(n+1,-1);
        cout<<solve(n-1, dp, v)<<"\n";
    }
}*/
/*int32_t main(){
    ll n{0};cin>>n;
    vector<ll> v(n,0);
    for(ll i{0};i<n;i++) cin>> v[i];
    ll prev1{a[1]-a[0]},prev2{0};
    for(ll i{0};i<n;i++){
        ll left = prev1 + abs(a[i]-a[i-1]);
        ll right = prev2 + abs(a[i]-a[i-2]);

        ll curr = min(left , right);

        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1 << "\n";
}*/

//frog jump with k distance
/*ll solve(ll ind,ll k, vector<ll>& a , vector<ll>& dp){
    // base case
    if(ind==0) return 0;

    //check dp at ind
    if(dp[ind]!=-1) return dp[ind];

    //calculate min steps required for reaching index ind
    ll minsteps{INT_MAX};
    for(ll i{1};i<=k;i++){
        if(ind-i>=0){
            ll jump = solve(ind-i, k, a, dp)+abs(a[ind]-a[ind-i]);
            minsteps=min(minsteps,jump);
        }
    }

    //store
    return dp[ind]=minsteps;
}
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},k{0};cin>>n>>k;
        vector<ll> v(n,0);
        for(ll i{0};i<n;i++)cin>>v[i];

        vector<ll> dp(n+1,-1);
        cout<<solve(n-1, k,v, dp)<<"\n";

    }
}*/
