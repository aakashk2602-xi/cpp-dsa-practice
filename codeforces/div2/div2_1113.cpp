#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//A
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        string s;
        cin >> s;
        auto n = s.size();
        size_t alice{0},bob{0};
        for(size_t i{0} ; i < n ; ++i){
            if(s[i]=='0'){
                alice = i;
                break;
            }
        }
        for(size_t i{0} ; i < n ; ++i){
            if(s[i]=='1'){
                bob = i;
                break;
            }
        }
        for( size_t i{0} ; i < n ; ++i ){
            if(bob!=i && alice!=i){
                cout << s[i];
            }
        }
        cout << '\n';
    }
    return 0;
}*/

//B
int main() {
	int T;
	scanf("%d", &T);
	for (int _ = 0; _ < T; ++_) {
		int n, m;
		scanf("%d %d", &n, &m);
		vector<int> a(n), b(m);
		for (int &x : a) {
		    scanf("%d", &x);
		}
		for (int &x : b) {
			scanf("%d", &x);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if (n < 2 * m) {
			puts("NO");
			continue;
		}

		int i = 0;
		while (i < m && a[i] < b[i] && b[i] < a[n - m + i]) ++i;
		puts(i < m ? "no" : "Yes");
	}
	return 0;
}