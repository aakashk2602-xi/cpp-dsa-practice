#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A. Sublime Sequence
int main(){
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
}