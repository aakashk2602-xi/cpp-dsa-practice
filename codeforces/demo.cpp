#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Div2 111 A
int32_t main(){
    ll n{0};cin>>n;
    vector<double>a(n,0);
    double sum{0};
    for(ll i{0};i<n;++i){cin>>a[i];sum+=a[i];}
    double currsum{0},count{0};
    sort(a.begin(),a.end(),greater{});
    for(ll i{0};i<n;++i){
        if(currsum<=sum/2.0){
            currsum+=a[i];
            ++count;
        }else{
            break;
        }
    }
    cout<<count<<"\n";
}
