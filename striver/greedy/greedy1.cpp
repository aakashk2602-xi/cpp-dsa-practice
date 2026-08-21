#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Assign cookies
/*void solve(){
    ll n{0},m{0},count{0};
    cin>>n>>m;
    vector<ll> gfact(n,0),hunger(m,0);
    for(size_t i{0};i<n;++i) cin>> gfact[i];
    for(size_t i{0};i<m;++i) cin>> hunger[i];
    sort(gfact.begin(),gfact.end());
    sort(hunger.begin(),hunger.end());
    size_t i{0},j{0};
    while(i<n && j<m){
        if(hunger[i] <= gfact[j]){
            ++i;++j;
            ++count;
        }else{
            ++i;
        }
    }
    for(size_t i{0};i<n;++i) cout<<gfact[i]<<" ";
    cout<<"\n";
    for(size_t i{0};i<m;++i) cout<<hunger[i]<<" ";
    cout<<"\n";
    cout<<count<<"\n";
}*/

// Lemonade change
/*bool solve(){
    ll n{0};
    cin>>n;
    vector<ll> bill(n,0);
    for(size_t i{0};i<n;++i) cin>>bill[i];
    ll five{0},ten{0};
    for(size_t i{0};i<n;++i){
        if(bill[i]==5) ++five;
        else if(bill[i]==10){
            if(five){--five;--ten;}
            else return false;
        }else {
            if(five && ten){--five;--ten;}
            else if(five>=3) five-=3;
            else return false;
        }
    }
    return true;
}*/

// Shortest job first(SJF) CPU Scheduling
bool solve(){
    ll n{0},count{0};
    cin>>n;
    vector<ll> bill(n,0);
    for(size_t i{0};i<n;++i) cin>>bill[i];
}
int32_t main(){
    cout<<solve();
    return 0;
}