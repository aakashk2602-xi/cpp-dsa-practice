#include <bits/stdc++.h>
#include <numeric>
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
/*int main(){
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
}*/

//D. Destruction of the Dandelion Fields
int main(){
    ll test{0};
    cin>> test;
    while (test--) {
        ll n{0},count{0};
        cin >> n ;
        ll odds{0};
        vector<ll> v(n,0);
        for( ll i{0} ; i<n ; i++ ){
            ll x{0};
            cin >> x;
            if(x&1){++odds;}
            v[i]=x;
        }
        ll OFF{0},sum{0},start{0};
        if( odds&0 ){
            for( ll i{0} ; i<n ; i++ ){
                if(v[i]&1){
                    ++OFF;
                }
                if(OFF==2){
                    for ( ll j{start} ; j < start + i ; j++) {
                        sum+=v[j];
                    }
                    start = i;
                    OFF=0;
                }
            }
            cout << sum << "\n";
        }else {
            cout << accumulate(v.begin(),v.end(),0)<<"\n";
            return 0;
        }
    }
    return 0;
}