#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1000000000000000000LL
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// B - Min matrices
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},k{0};cin>>n>>k;
        if(k<n || k==2*n){
            cout<<-1<<"\n";
            continue;
        }
        vector<vector<ll>> v( n+1 ,vector<ll>(n+1));
        ll val{n+1};
        for(ll i{1};i<=n;i++){
            for(ll j{1};j<=n;j++){
                if(i==j){
                    v[i][j]=i;
                    continue;
                }
                v[i][j]=val;
                val++;
            }
        }

        ll shift{k-n};
        ll row{2};
        while(shift--){
            swap(v[row][1],v[row][row]);
            row++;
        }
        
        for(ll i{1};i<=n;i++){
            for(ll j{1};j<=n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
