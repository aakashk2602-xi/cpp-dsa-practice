#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
	
//A.The 67th Integer Problem 
/*int main(){
    ll n{0},t{0};
    cin >> t;
    while (t--) {
        cin >> n;
        if(n<67){
        cout << n+1<<"\n";
        }else {
        cout << n<<"\n";
        }
    }
    return 0;
}*/

//B.The 67th 6-7 Integer Problem 
/*int main(){
    ll t{0};
    cin >> t;
    vector<ll> v(7,0);
    while (t--) {
        ll x{0};
        for(ll i=0 ; i<7 ; i++){
            cin >> x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        for(ll i=0 ; i<6 ; i++){
            v[i]=-v[i];
        }
        cout << accumulate(v.begin(),v.end(),0)<<"\n";
    }
    return 0;
}*/

//C. The 67th Permutation Problem
/*int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll n{0};
        cin>>n;
        vector<ll> v;
        for(ll i=1;i<=3*n;i++){
            v.push_back(i);
        }
        ll sum{0},cursum;
        do {
            cursum=0;
            for(ll i=1;i<=3*n;i+=3){
                cursum += v[i];
            }
            sum=max(sum,cursum);
        }while (next_permutation(v.begin(),v.end()));
        sort(v.begin(),v.end());
        do {
            ll s=0;
            for(ll i=1;i<=3*n;i+=3){
                s += v[i];
            }
            if (s==cursum) {
                break;
            }
        }while (next_permutation(v.begin(),v.end()));
        cout << cursum<<"\n";
        for ( auto i:v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}*/