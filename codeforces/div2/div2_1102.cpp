#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
//#define sort(x) sort(all(x))
//#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Euclid, Sequence and Two Numbers 
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        //inputs-->
        ll n{0};cin>>n;
        vector<ll>v(n,0);
        for(ll i{0};i<n;i++) cin>> v[i];


        // logic-->
        ll flag{1};
        sort(v.begin(),v.end(),greater<ll>());

        for(ll i{0};i<n-2;i++) if(v[i+2]!=v[i]%v[i+1]) flag=0;


        //output-->
        if(flag==0){cout<<"-1\n";}
        else cout<< v[0] <<" "<<v[1]<<'\n';

        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
