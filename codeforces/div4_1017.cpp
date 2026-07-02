#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A
/*int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        string s1 , s2 , s3;
        cin >> s1 >> s2 >> s3 ;
        cout << s1[0] << s2[0] << s3[0] << "\n";
    }
    return 0;
}*/

//B
int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll n,m,l,r;
        cin >> n >> m >> l >> r;
        if( m<= r ){
            cout << 0 << " " << m << "\n";
        }else {
            cout << r-m << " " << r << "\n";
        }
    }
    return 0;
}