#include <bits/stdc++.h>
#include <climits>
using namespace std;
typedef long long ll;

//second largest from a non negative sequence
void s_largest(vector<ll>& v){
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
}
//second smallest from a non negative sequence
void s_smallest(vector<ll>& v){
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
}
//check if sorted or not
bool is_sortd(vector<ll>& v){
    for(ll i{0} ; i < v.size()-1 ; i++){
        if( v[i]>v[i+1] ) {
            return false;
        }
    }
    return true;
}
//remove duplicates or just do erase(unique(v.begin(),v.end()));
ll remove_duplicates(vector<ll> &v){
    ll n = v.size();
    ll i{0};
    for( ll j{0} ; j<n ; j++ ){
        if( v[i] != v[j] ){
            v[i+1]=v[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    vector<ll> v;
    ll x{0};
    while (cin >> x) {
        v.push_back(x);
    }
    s_largest(v);
    s_smallest(v);
    cout << is_sortd(v);
}