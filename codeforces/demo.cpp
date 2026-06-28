//D. Yet Another Array Problem
/*int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    using ll = long long;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &i: a) cin >> i;
        for (ll x : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53}) {
            int ok = 0;
            for (ll i : a) {
                if (i % x) {
                    ok = 1;
                    break;
                }
            }
            if (ok) {
                cout << x << '\n';
                break;
            }
        }
    }
}
    
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
}	*/