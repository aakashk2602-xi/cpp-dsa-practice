#include <bits/stdc++.h>
#include <cstdint>
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
/*int32_t main(){
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
        ll last_unquals{0};
        for(ll i{n-1};i>=0;--i){
            if(a[i]!=b[i]){
                last_unquals=i;
                break;
            }
        }
        //even=ajisai and odd=mai
        if(last_unquals&1){
            for(ll i{0};i<n;i+=2){
                if(a[i]!=b[i] && a1%2==0){
                    swap(a[i],b[i]);
                    if(a1){a1--;b1++;}
                    else{a1++;b1--;}
                }
            }
            for(ll i{1};i<n;i+=2){
                if(b[i]!=a[i] && b1%2==0){
                    swap(a[i],b[i]);
                    if(b1){b1--;a1++;}
                    else{b1++;a1--;}
                }
            }
        }else{
            for(ll i{1};i<n;i+=2){
                if(b[i]!=a[i] && b1%2==0){
                    swap(a[i],b[i]);
                    if(b1){b1--;a1++;}
                    else{b1++;a1--;}
                }
            }
            for(ll i{0};i<n;i+=2){
                if(a[i]!=b[i] && a1%2==0){
                    swap(a[i],b[i]);
                    if(a1){a1--;b1++;}
                    else{a1++;b1--;}
                }
            }
        }
        
        if(a1%2==b1%2) cout<<"Tie\n";
        else{
            if(a1%2==1 && b1%2==0) cout<<"Ajisai\n";
            else if(a1%2==0 && b1%2==1) cout<<"Mai\n";
            else cout<<"Tie\n";
        }
    }
    return 0;
}*/

// C2 - Renako Amaori and XOR Game (hard version)
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin >> n;
        vector<ll> a(n,0), b(n,0);
        ll A{0},B{0};
        for(ll i{0};i<n;++i){
            cin>>a[i];
            A^=a[i];
        }
        for(ll i{0};i<n;++i){
            cin>>b[i];
            B^=b[i];
        }
        if(A==B){
            cout<<"Tie\n";
            continue;
        }
        ll diff{A^B};
        ll bit=63-__builtin_clzll(diff);
        ll last_index{-1};
        for(ll i{n-1};i>=0;--i){
            if((a[i]^b[i])&(1LL<<bit)){
                last_index=i;
                break;
            }
        }
        //even=Ajisai odd=Mai kyunki 0 is reference
        if (last_index % 2 == 0)cout << "Ajisai\n";
        else cout << "Mai\n";
    }
}*/
