#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Count Maximum Consecutive One's in the array
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        ll arr[n];
        for(ll i{0} ; i < n ; ++i) cin >> arr[i];
        ll count{0},ans{0};
        for(ll i{0} ; i < n ; ++i) {
            if( arr[i] == 1 ){
                ++count;
            }else {
                count=0;
            }
            ans = max(count,ans);
        }
        cout << ans << "\n"; 
    }
}*/

// Find the number that appears once, and the other numbers twice
/*Two important properties of XOR are the following:
    -> XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
    -> XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a. ←Property 2*/
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        ll arr[n];
        for(ll i{0} ; i < n ; ++i) cin >> arr[i];
        ll ans{0};
        for(ll i{0} ; i < n ; ++i) {
            ans^=arr[i];
        }
        cout << ans << "\n"; 
    }
}*/

//Longest Subarray with given Sum K(Positives)
/*better --> O(NlogN)
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
        
        map<ll, int32_t > preSumMap;
        ll prefixsum{0},maxLen{0};
        for( ll i{0} ; i < n ; ++i ) {
            prefixsum += arr[i];
            if( prefixsum == k ) {
                maxLen = max(maxLen,i+1);
            }
            ll rem = prefixsum - k;
            if( preSumMap.find(rem) != preSumMap.end() ){
                ll len = i - preSumMap[rem];
                maxLen = max(maxLen,len);
            }
            if( preSumMap.find(prefixsum) == preSumMap.end() ) {
                preSumMap[prefixsum] = i;
            }
        }
        cout << maxLen;
    }
}*/
/*better --> O(N)
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
            if( left <= right && sum > k ){
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
}*/

//