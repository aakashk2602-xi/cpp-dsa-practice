#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A - Perfect Root 
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

//C - Shifted MEX 
/*int main(){
    ll t{0},count{0};
    cin >> t;
    while (t--) {
        ++count;
        ll n{0};
        cin >> n;
        vector<ll> v(n,0);
        for(ll i=0 ; i<n ; i++){
            ll y;
            cin >> y;
            v[i]=y;
        }
        sort(v.begin(),v.end());
        ll x= -v[0];
        set<ll> set;
        for(ll i: v){
            set.insert(i+x);
        }
        ll j=0;
        for( auto i : set ){
            if( i!=j ){break;}
            else {++j;}
        }
        cout << j<<"\n";
    }
    return 0;
}*/