#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    ll count{1},ans{0};
    for(ll i{0} ; i < s.size()-1 ; ++i ) {
        if(s[i]!=s[i+1]){
            ++count;
            count = 1;
        }else {
            ++count;
        }
        ans=max(ans,count);
    }
    if(ans>=7) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}