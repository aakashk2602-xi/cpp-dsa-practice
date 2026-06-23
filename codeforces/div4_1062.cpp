#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//A - Square
int main(){
    ll t{0};
    cin>> t;
    while (t--) {
        ll w,x,y,z;
        cin >> w >> x >> y >> z;
        if( w==x && x==y && y==z ){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
}