#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// A - Shizuku Hoshikawa and Farm Legs 
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        if(n&1){cout<<0<<"\n";continue;}
        cout<<n/4+1<<"\n";
    }
    return 0;
}*/

// B - Yuu Koito and Minimum Absolute Sum
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll> v(n,0);
        ll find{0};
        for(ll i{0};i<n;++i){
            cin>>v[i];
            if(i==0 or i==n-1 ){
                find=max(find,v[i]);
            }
        }
        for(ll i{0};i<n;++i){
            if(v[i]==-1){
                if(i!=0 && i!=n-1) v[i]=0;
                else v[i]=find;
            }
        }
        ll sum{0};
        for(ll i{0};i<n-1;++i) sum+=(v[i+1]-v[i]);
        cout<<abs(sum)<<"\n";
        for(auto i:v) cout<<i<<" ";
        cout<<"\n";

    }
    return 0;
}*/

// C1 - Renako Amaori and XOR Game (easy version)
int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll>a(n,0),b(n,0);
        ll a0{0},a1{0},b0{0},b1{0};
        for(ll i{0};i<n;++i){
            cin>>a[i];
            if(a[i]==1) ++a1;
            else ++a0;
        }
        for(ll i{0};i<n;++i){
            cin>>b[i];
            if(b[i]==1) ++b1;
            else ++b0;
        }
        cout<<a1<<" "<<b1<<" \n";
        // even=ajisai and odd=mai
        for(ll i{0};i<n;i+=2){
            if(a[i]==0 && b[i]==1 && a1&0){
                swap(a[i],b[i]);
                a1++;
                cout<<i<<" \n";
                break;
            }
        }
        for(ll i{1};i<n;i+=2){
            if(b[i]==0 && a[i]==1 && b1&0){
                swap(a[i],b[i]);
                b1++;
                break;
            }
        }
        if(a1&1){
            if(b1&1) cout<<"Tie";
            else cout<<"Ajisai";
        }else if(b1&1){
            if(a1&1) cout<<"Tie";
            else cout<<"Mai";
        }else{
            cout<<"Tie";
        }
        cout<<"\n";
    }
    return 0;
}
