#include <bits/stdc++.h>
#include <utility>
using namespace std;
typedef long long ll;

// A - Sieve of Erato67henes
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0},x{0},flag{0};
        cin >> n;
        for(ll i{0};i<n ; ++i){
            cin >> x;
            if(x==67){
                flag = 1;
            }
        }
        if ( flag ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}*/

// B - Heapify 1
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        int n;cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=n;i+=2){
      for(int j=i;j<=n;j*=2){
        for(int k=i*2;k<=n;k*=2){
          if(a[k/2]>a[k]) swap(a[k/2],a[k]);
        }
      }
    }
    if(is_sorted(begin(a),end(a))) cout << "YES\n";
    else cout << "NO\n";
    }
    return 0;
}
