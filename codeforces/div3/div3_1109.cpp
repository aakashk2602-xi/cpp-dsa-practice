#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Iskander and Drawings
/*int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        string s(n,0);
        cin >> n >> s;
        ll currcount{0}, hashcount{0};
        for(auto i : s){
            if(i=='*') currcount = 0;
            else ++currcount;
            hashcount = max(hashcount,currcount);
        }
        cout << ceil(double(hashcount)/2.0) << "\n";
    }
}*/

// B - Nikita and Books
/*int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0},sum{0};
        cin >> n;
        ll flag{1};
        for(ll i{1} ; i <= n ; ++i){
            ll x{0};
            cin >> x;
            sum += x;
            if( (i*(i+1))/2 > sum ) flag = 0;
        }
        if(flag){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
 
    }
}*/
