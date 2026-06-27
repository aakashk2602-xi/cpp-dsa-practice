#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A. Sublime Sequence
/*int main(){
    ll test{0};
    cin>> test;
    while (test--) {
        ll x{0},n{0};
        cin >> x >> n ;
        if(n&1){
            cout << x << "\n";
        }else{
            cout << 0 << "\n";
        }
    }
    return 0;
}*/

//B. Lasers
/*int main(){
    ll test{0};
    cin>> test;
    while (test--) {
        ll n{0},m{0},x{0},y{0},count{0};
        cin >> n >> m >> x >> y ;
        vector<ll> a(n,0),b(m,0);
        for( ll i{0} ; i < n ; i++ ){ cin >> a[i]; }
        for( ll i{0} ; i < m ; i++ ){ cin >> b[i]; }
        for( ll i{0} ; i < n ; i++ ){
            if( a[i] <= y ){ ++count; }
        }
        for( ll i{0} ; i < m ; i++ ){
            if( b[i] <= x ){ ++count; }
        }
        cout << count << "\n";
    }
    return 0;
}*/

//D. Destruction of the Dandelion Fields
/*int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll test{0};
    cin >> test;
    while (test--) {
        ll n = 0;
        cin >> n;
        vector<ll> odd;
        ll even_sum = 0;
        
        for(ll i{0}; i < n; i++){
            ll x{0};
            cin >> x;
            if(x & 1){
                odd.push_back(x);
            }else {
                even_sum += x;
            }
        }
        
        if(odd.empty()){
            cout << 0 << "\n";
            continue;
        }

        sort(odd.rbegin(), odd.rend());
        ll answer = even_sum;
        ll take = (odd.size() + 1) / 2;
        for(ll i{0}; i < take; i++){
            answer += odd[i];
        }

        cout << answer << "\n";
    }
    return 0;
}*/

//
int main(){
	int T;
	cin >> T;
	while(T--){
		int n, m, x , y;
		cin >> n >> m;
		int px = 0, py = 0;
		int points = 0;
		while(n--){
			cin >> x >> y;
			points += x - px;
			if(((x - px + 2) % 2) != ((y - py + 2) % 2))points--;
			px = x;
			py = y;
		}
		if(px != m){
			points += m - px;
		}
		cout << points << endl;
	}
}	