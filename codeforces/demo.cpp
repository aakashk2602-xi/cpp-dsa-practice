#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// C
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll x{0},y{0};
        cin>>x>>y;
        ll copyx{x},copyy{y};
        ll ans{-1};
        ll count{-1};
        if(x>y){
            while(x!=y){
                ans=max(ans,(x^y));
                --x;++y;
            }
            ans=max(ans,x+y);
            while(copyx>=0){
                ++count;
                if(ans==(copyx^copyy)) {--count;break;}
                --copyx;++copyy;
            }
            if(ans==copyx+copyy) ++count;
        }else{
            while(x>0){
                ans=max(ans,(x^y));
                --x;++y;
            }
            ans=max(ans,x+y);
            while(copyx>=0){
                ++count;
                if(ans==(copyx^copyy)) {--count;break;}
                --copyx;++copyy;
            }
            if(ans==copyx+copyy) ++count;
        }
        cout<<ans<<" "<<count<<"\n";
    }
    return 0;
}*/
