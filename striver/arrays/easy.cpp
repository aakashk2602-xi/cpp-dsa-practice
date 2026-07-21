#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//second largest from a non negative sequence
/*void s_largest(vector<ll>& v){
    ll largest{v[0]};
    ll slargest{-1};
    for( ll i{0} ; i < v.size() ; i++ ){
        if( v[i]>largest ){
            slargest = largest;
            largest = v[i];
        }else if( v[i] < largest && slargest < v[i] ){
            slargest = v[i];
        }
    }
    cout << slargest << "\n";
}*/

//second smallest from a non negative sequence
/*void s_smallest(vector<ll>& v){
    ll smallest {INT_MAX};
    ll ssmallest {-1};
    for( ll i{0} ; i < v.size(); i++ ){
        if( v[i]<smallest ){
            ssmallest = smallest;
            smallest=v[i];
        }else if ( v[i] > smallest && v[i]<ssmallest ) {
            ssmallest = v[i];
        }
    }
    cout << ssmallest << "\n";
}*/

//check if sorted or not
/*bool is_sortd(vector<ll>& v){
    for(ll i{0} ; i < v.size()-1 ; i++){
        if( v[i]>v[i+1] ) {
            return false;
        }
    }
    return true;
}*/

//remove duplicates or just do erase(unique(v.begin(),v.end()));
/*ll remove_duplicates(vector<ll> &v){
    ll n = v.size();
    ll i{0};
    for( ll j{0} ; j<n ; j++ ){
        if( v[i] != v[j] ){
            v[i+1]=v[j];
            i++;
        }
    }
    return i+1;
}*/

// rotation by k element
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0} ,k{0};
        string s;
        cin >> n >> k >> s;
        vector<ll> v(n,0);

        for( ll i{0} ; i < n ; ++i ) cin >> v[i];
        k%=n; // normalization

        vector<ll> temp(k,0);
        if (s == "right") {
            for (ll i = n - k; i < n; ++i) temp[i - (n - k)] = v[i];
            for (ll i = n - k - 1; i >= 0; --i) v[i + k] = v[i];
            for (ll i = 0; i < k; ++i) v[i] = temp[i];
        }else {
            for ( ll i{0} ; i < k ; ++i ) temp[i] = v[i];
            for ( ll i{k} ; i < n ; ++i ) v[i-k] = v[i];
            for ( ll i{0} ; i < k ; ++i ) v[n-k+i] = temp[i];
        }
        for( auto i : v ) cout << i << " ";
        cout << "\n";
    }
}*/

// move all zeros to the end of the array
/*int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        vector<ll> v(n,0);
        for(ll i{0} ; i < n ; ++i) cin >> v[i];

        ll j{n-1} , i{0};
        while(i<=j && i<n && j>=0){
            if(v[j]==0){
                --j;
                continue;
            }
            if( v[i]==0 and v[j]!=0 ){
                swap(v[i],v[j]);
                --j;
            }
            ++i;
        }
        for(auto i : v) cout << i << " ";
        cout << "\n";
    }
}*/

// union of two sorted arrays with individually distinct numbers
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0},m{0};
        cin >> n >> m;
        ll arr1[n],arr2[m];
        for(ll i{0} ; i < n ; ++i) cin >> arr1[i];
        for(ll i{0} ; i < m ; ++i) cin >> arr2[i];
        ll i{0},j{0};
        vector<ll>ans;
        while (i<n && j<m) {
            if( arr1[i] < arr2[j] ){
                ans.push_back(arr1[i]);
                ++i;
            }else if ( arr1[i] > arr2[j] ) {
                ans.push_back(arr2[i]);
                ++j;
            }else {
                ans.push_back(arr1[i]);
                ++i; ++j;
            }
        }
        if( i == n ) {
            for(; j < m ; j++) ans.push_back(arr2[j]);
        }else if ( j == m ) {
            for(; i < n ; i++) ans.push_back(arr1[i]);
        }
        for(auto i : ans) cout << i << " ";
        cout << "\n";
    }
}*/

// Find the Missing Number
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        cin >> n;
        ll arr1[n-1] , sum{0};
        for(ll i{0} ; i < n-1 ; ++i){
            cin >> arr1[i];
            sum += arr1[i];
        }
        cout << (n*(n+1)/2) - sum <<"\n";
        
    }
}*/
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
/*better --> O(2N)
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
}*/
