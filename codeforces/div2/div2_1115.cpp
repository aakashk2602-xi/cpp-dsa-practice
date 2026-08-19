#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Boss Fight
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin>>_;
    while(_--){
        ll n{0};
        cin>>n;
        vector<ll>v(n,0);
        for(ll i{0};i<n;++i) cin>>v[i];
        map<ll,ll> hashmap;
        for(auto i:v) ++hashmap[i];
        ll F{-1},X{-1},sum{0};
        for(auto& [key,freq]:hashmap){
            sum+=key*min(freq,n-freq+2);
        }
        cout<<sum<<"\n";
    }
    return 0;
}*/

// B - Always Changing --third and final attempt
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin>>_;
    while(_--){
        size_t n{0};
        string s;
        cin>>n>>s;
        vector<size_t> start1,start0,end1,end0;
        for(size_t i{0};i<n-1;++i){
            if(s[i]!=s[i+1]){
                if (s[i]==0){start1.push_back(i+1); end0.push_back(i);}
                else if(s[i]==1){start0.push_back(i+1);end0.push_back(i);}
            }
        }
        vector<size_t> brac0,brac1;
        for(size_t i{0};i<start1.size();++i) brac1.push_back(end1[i]-start1[i]+1);
        for(size_t i{0};i<start0.size();++i) brac0.push_back(end0[i]-start0[i]+1);
        ll count0{0},count1{0};
        for(ll i{0};i<start0.size();++i) {if(start0[i]>1) count0+=(start0[i]-1);}
        for(ll i{0};i<start1.size();++i) {if(start1[i]>1) count1+=(start1[i]-1);}
        if(count0==count1) cout<<count0+count1;
        else cout<<-1;
        cout<<'\n';
    }
    return 0;
}
