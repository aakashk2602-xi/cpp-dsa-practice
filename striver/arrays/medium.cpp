#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0},k{0};
        cin >> n >> k;
        ll arr[n];
        for(ll i{0} ; i < n ; ++i) cin >> arr[i];
        
        ll left{0}, right{0},maxlen{0},sum{arr[0]};
        while( right < n ){
            while( left <= right && sum > k ){
                sum-=arr[left];
                left++;
            }
            if( sum == k ){
                maxlen = max(maxlen,right - left + 1 );
            }
            right++;
            if(right<n) sum += arr[right];
        }
        cout << maxlen << "\n";
    }
}