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
/*int main(){
 
    int tt;
    cin >> tt;
 
    while(tt--){
        int x;
        cin >> x;
 
        int y = 1;
 
        while(x > 0){
            y *= 10;
            x /= 10;
        }
 
        cout << y + 1 << '\n';
    }
 
    return 0;
}*/

//C
/*int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll c{0},n{0};
        string s;
        cin >> n;
        cin >> s;
        for(ll i{0} ; i<s.size()-1 ; i++ ){
            if( s[i]!=s[i+1] ){
                ++c;
            }
        }
        if(c==1){
            cout << 2 << "\n";
        }else {
            cout << 1 << "\n";
        }
    }
    return 0;
}*/