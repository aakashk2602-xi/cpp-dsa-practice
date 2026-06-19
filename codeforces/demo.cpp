#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n{0};
    cin >> n;
    ll ans = n;
    for( ll i=1 ; i<n ; i++ ){
        ans+=i*(n-i);
    }
    cout << ans;
    return 0;
}