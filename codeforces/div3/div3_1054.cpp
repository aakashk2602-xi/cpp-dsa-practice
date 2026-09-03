#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Be Positive 
/*int32_t main(){
    ll _{0};cin>>_;
    while (_--) {
        ll n{0};cin>>n;
        ll count0{0},count_1{0};ll x{0};
        for(ll i{0};i<n;++i){
            cin>>x;
            if(x==-1) ++count_1;
            else if(x==0) ++count0;
            else continue;
        } 
        cout<<count0+2*(count_1%2)<<"\n";
    }
    return 0;
}*/

// B - Unconventional Pairs
/*int32_t main(){
    ll _{0};cin>>_;
    while (_--) {
        ll n{0};cin>>n;
        vector<ll> v(n,0);
        for(ll i{0};i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll diff{0},ans{0};
        if(n==2){
            ans=v[1]-v[0];
        }else{
            for(ll i{0};i<=n-2;i+=2){
                diff=abs(v[i+1]-v[i]);
                ans=max(diff,ans);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}*/

// C - MEX rose - paras's solution
/*void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll mex =0;
    for(int i=0;i<=n;i++){
        if(mp[i] ==0){
            mex = i;
            break;
        }
    }
    if(mex ==k){
        cout << 0 << endl;
    }
    else if(mex > k){
        //mtlb mex ki value required se jyada hnn toh hame count nikalke unhe minus krna hnn
        ll count =0;
        count += mp[k];
        // for(ll i=k;i<mex ;i++){
        //     count += mp[k];
        // }
        cout << count << endl;
    }
    else if(mex < k){
        //mtlb mex ki value required value se kam hnn
        ll count =0;
        for(ll i=mex ;i<k;i++){
            if(mp[i] ==0){
                count++;
            }
        }
        ll anss = max(count , mp[k]);
       // count += mp[k];
        cout << anss << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}*/
