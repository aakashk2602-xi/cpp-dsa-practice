#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A
/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y ;
        ll z = x/y;
        if(y*z==x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
*/

//B
/*bool isGood(ll variable){
    vector<ll> mp;
    while (variable) {
        mp.push_back(variable%10);
        variable/=10;
    }
    std::sort(mp.begin(), mp.end());
    mp.erase(std::unique(mp.begin(), mp.end()), mp.end());
    if( mp.size() > 2 ) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll x{0};
        cin >> x ;
        for( ll y = 2 ; y < INT_MAX ; y++ ){
            if( isGood(y) && isGood(x*y)){
                cout << y <<"\n";
                break;
            }
        }
    }
}*/

