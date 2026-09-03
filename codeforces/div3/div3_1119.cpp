#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        if(n&1){cout<<0<<"\n";continue;}
        cout<<n/4+1<<"\n";
    }
    return 0;
}