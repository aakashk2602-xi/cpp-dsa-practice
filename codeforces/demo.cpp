#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

int32_t main(){
    ll n{0},x{0};cin>>n>>x;
    vector<ll> v(n,0);
    for(ll i{0};i<n;i++)cin>>v[i];

    sort(v);
    ll sum{0};
    ll count{0};
    for(ll i{0};i<n;i++){
        sum+=v[i];
        if(sum<=x){
            
        }else{
            sum=v[i];
            count++;
        }
        cout<<count<<" "<<sum<<" \n";
    }
    cout<<"\n";
    cout<<count<<"\n";

}
