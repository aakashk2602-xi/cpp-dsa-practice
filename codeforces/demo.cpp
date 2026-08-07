#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main(){
    ll _{0};
    cin >> _;
    while(_--){
        ll n{0};
        cin >> n;
        if(n&1 && isPrime(n)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}