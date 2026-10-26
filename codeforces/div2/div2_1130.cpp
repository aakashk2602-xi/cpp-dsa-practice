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
        //input--->
        ll n{0},k{0};cin>>n>>k;
        vector<ll>v(n,0);
        for(ll i{0};i<n;i++) cin>> v[i];


        //base case-->
        //if(is_sorted(v.begin(),v.end())) {cout<<"-1\n"; continue;}
            

        // right
        ll pivot=n-k;

        //right of pivot
        ll minor{INF};
        ll minorindex{-1};
        for(ll j{pivot+1};j<n;j++) minor = min(minor,v[j]);
        for(ll j{0};j<n;j++) if(minor==v[j]) minorindex = j+1;


        //left of pivot
        ll maxi{-1};
        ll maxindex{-1};
        for(ll j{0};j<=pivot;j++)  maxi = max(maxi,v[j]);
        for(ll j{0};j<n;j++) if(maxi==v[j]) maxindex = j+1;

        if(maxi==pivot) {cout<<"-1\n"; continue;}



        //result-->
        if(minorindex!=maxindex) cout<<min(minorindex,maxindex)<<" "<<max(minorindex,maxindex)<<"\n";
        else cout<<"-1\n";

        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
