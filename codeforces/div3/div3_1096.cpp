#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Koshary
/*int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll x{0} , y{0};
        cin >> x >> y ;
        x%=2;
        y%=2;
        if(x==1 and y==0){
            --x;
        }else if( x==0 and y==1 ){
            --y;
        }

        if( x==0 and y==0 ){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}*/

// B - Party Monster
int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll n{0},open{0},close{0};
        string s;
        cin >> n >> s;
        for( auto i : s ){
            if( i == '(' ){
                ++open;
            }else {
                ++close;
            }
        }
        if(open==close){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}
