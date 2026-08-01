#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        string s;
        cin >> s;
        auto n = s.size();
        size_t alice{0},bob{0};
        for(size_t i{0} ; i < n ; ++i){
            if(s[i]=='0'){
                alice = i;
                break;
            }
        }
        for(size_t i{0} ; i < n ; ++i){
            if(s[i]=='1'){
                bob = i;
                break;
            }
        }
        for( size_t i{0} ; i < n ; ++i ){
            if(bob!=i && alice!=i){
                cout << s[i];
            }
        }
        cout << '\n';
    }
    return 0;
}*/

//B
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0},m{0};
        cin >> n >> m ;
        vector<ll> a(n,0) , b(m,0);
        for ( ll i{0} ; i < n ; ++i ) cin >> a[i];
        for ( ll i{0} ; i < m ; ++i ) cin >> b[i];
    }
    return 0;
}