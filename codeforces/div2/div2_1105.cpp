#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


// A
int32_t main(){
	ll _{0};
	cin >> _;
	while(_--){
		ll k{0},n{0};
		cin >> n >> k;

		ll p{1};
		ll ans{0};
		for(; k*p<=n; p<<=1){
			n-=p*k;
			ans+=k;
		}
		ans+=(n/p);
		cout<<ans<<"\n";
	}
    return 0;
}