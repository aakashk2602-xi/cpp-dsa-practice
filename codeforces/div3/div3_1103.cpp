#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A - Games on the Train 
/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> h(n,0);
        for( ll i=0 ; i < n ; i++ ){
            cin >> h[i];
        }
        ll highest{-1},lowest{INT_MAX};
        for ( auto i : h ) {
            if( i > highest ){
                highest = i;
            }
            if( i < lowest ){
                lowest =i;
            }
        }
        cout << highest - lowest + 1<< "\n";
    }
}*/

//B - Tatar TV Show
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        string s;
        cin>>n>>k>>s;
        for(ll i=0;i<n-k;i++){
            if(s[i]=='1'){
                s[i]='0';
                if(s[i+k]=='0') s[i+k]='1';
                else s[i+k]='0';
            }
        }
        int flag=1;
        for(char x: s){
            if(x=='1'){
                flag=0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}