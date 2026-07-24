#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Two Sum
/* better solution --> O(NlogN) */
/*vector<ll> solve(ll& size, ll *arr , ll& target){
        map<ll , int32_t > hashmap;
        ll rest{0};
        for( ll i{0} ; i < size ;++i ){
            rest = target - arr[i];
            if(hashmap.find(rest)!=hashmap.end()){
                return {hashmap[rest],i};
            }
            hashmap[arr[i]] = i;
        }
        return {-1,-1};
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll size{0},target{0};
        cin >> size >> target;
        ll arr[size];
        for(ll i{0} ; i < size ; ++i) cin >> arr[i];
        cout << solve(size,arr,target)[0] << " " << solve(size,arr,target)[1] << "\n";
    }
}*/
/*optimal solution --> O()*/

