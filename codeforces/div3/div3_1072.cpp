#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin>> n;
        if(n<=3) cout<< n;
        else cout<< n%2;
        cout<< "\n";
    }
    return 0;
}