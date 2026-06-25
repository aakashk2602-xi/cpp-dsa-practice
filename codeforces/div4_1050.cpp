#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A. Sublime Sequence
/*int main(){
    ll test{0};
    cin>> test;
    while (test--) {
        ll x{0},n{0};
        cin >> x >> n ;
        if(n&1){
            cout << x << "\n";
        }else{
            cout << 0 << "\n";
        }
    }
    return 0;
}*/

//B. Lasers
int main(){
    ll test{0};
    cin>> test;
    while (test--) {
        ll n{0},m{0},x{0},y{0},count{0};
        cin >> n >> m >> x >> y ;
        vector<ll> a(n,0),b(m,0);
        for( ll i{0} ; i < n ; i++ ){ cin >> a[i]; }
        for( ll i{0} ; i < m ; i++ ){ cin >> b[i]; }
        for( ll i{0} ; i < n ; i++ ){
            if( a[i] <= y ){ ++count; }
        }
        for( ll i{0} ; i < m ; i++ ){
            if( b[i] <= x ){ ++count; }
        }
        cout << count << "\n";
    }
    return 0;
}