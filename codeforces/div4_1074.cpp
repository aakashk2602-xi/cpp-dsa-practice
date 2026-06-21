#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A - Perfect Root 
int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll n{0},x{0};
        cin >> n;
        vector<ll> v(n,0);
        for(ll i=0 ; i<n ; i++){
            cin >> x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        cout << n*v[n-1]<<"\n";
    }
    return 0;
}

//B - Prefix Max 
/*int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll n{0},x{0};
        cin >> n;
        vector<ll> v(n,0);
        for(ll i=0 ; i<n ; i++){
            cin >> x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        cout << n*v[n-1]<<"\n";
    }
    return 0;
}*/