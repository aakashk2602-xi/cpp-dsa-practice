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

//C. The 67th Permutation Problem - greedy
/*int main(){
    ll t{0};
    cin >> t;
    while (t--) {
        ll n{0};
        cin>>n;
        for( ll i=1 ,j=3*n ; i<j ; ++i , j-=2 ){
            cout << i << " " << j-1 << " " << j << " ";
        }
        cout << endl;
    }
    return 0;
}*/

//D. The 67th OEIS Problem
int main(){
    ll test{0};
    cin >> test;
    while(test--){
        ll n{0};
        cin >> n;
        for( ll i{0} ; i < n ; i++ ){
            cout << (2*i+1)*(2*i+3)<<" ";
        }
        cout << "\n";
    }
}