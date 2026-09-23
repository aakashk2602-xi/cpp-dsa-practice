#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
//(sort)(all(v), comp); for custom compareror
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

//  Valid Parenthesis String - Range based
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        string s(n,'0');cin>>s;
        ll minimum{0},maximum{0};
        for(ll i{0};i<n;i++){
            if(s[i]=='('){ ++minimum; ++maximum; }
            else if(s[i]==')'){ --minimum; --maximum; }
            else{ --minimum; ++maximum; }

            if(minimum<0) minimum=0;
            if(maximum<0) { cout<<"No\n"; continue; }
        }
        if(minimum==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// Candy - Slope based approach
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        vector<ll>v(n,0);
        for(ll i{0};i<n;i++) cin>> v[i];

        ll sum{1},i{1};
        while(i<n){
            if(v[i]==v[i-1]) ++sum;
            ll peak=1;
            while(i<n && v[i]>v[i-1]){
                ++peak;++i;
                sum+=peak;
            }
            ll down{1};
            while(i<n && v[i]<v[i-1]){
                sum+=down;
                ++i;++down;
            }
            if(down>peak) sum+=(down-peak);
        }
        cout<<"Minimum Candies Required :"<<sum<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// Fractional Knapsack
/*struct item{
    double value{0.0};
    double weight{0.0};
};

bool comp(item& a,item& b){
    double weight_a{a.value/a.weight},weight_b{b.value/b.weight};
    if(weight_a>=weight_b) return true;
    return false;

}

int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        double W{0.0};cin>>W;
        ll n{0};cin>>n;
        vector<item>v(n,{0.0,0.0});
        for(ll i{0};i<n;i++) cin>>v[i].value>>v[i].weight;

        (sort)(all(v), comp);
        double total{0.0};
        for(ll i{0};i<n;i++){
            if(v[i].weight<=W){
                total+=v[i].weight;
                W-=v[i].weight;
            }else{
                total+=(v[i].value/v[i].weight) * W;
                break;
            }
        }
        cout<<total<<"\n";
        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
