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

// B - Always Changing --second attempt
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
        size_t i{0},j{0};
        bool flag{1};
        ll count{0};
        while(i<brac1.size() && j<brac1.size()){
            if(brac1[i]>1){--brac1[i];count++;i++;}
            if(brac0[i]>1){--brac0[i];count++;j++;}
            if(brac1[i]<1 && brac0[i]<1){
                flag=0;
                i=0;
                j=0;
            }
        }
        if(flag) cout<<count<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}