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
/*void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
 
    if (n < 2*m) {
        cout << "NO\n";
        return;
    }
    else {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < m; i++) {
            if (a[i] > b[i] || a[n - m + i] < b[i]) {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        solve();
    }
    return 0;
}*/
