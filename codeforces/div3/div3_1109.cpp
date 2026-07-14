#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Iskander and Drawings
int main(){
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
}