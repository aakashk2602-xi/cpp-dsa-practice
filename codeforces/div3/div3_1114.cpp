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
        ll a , b, c;
        cin >> a >> b >> c;
        if( a==b or b==c or a==c ){
            cout << 0 << "\n";
            continue;
        }
        else {
            ll diff1 = abs(a-b);
            ll diff2 = abs(b-c);
            ll diff3 = abs(a-c);
            ll mini = min(diff1,diff2);
            cout << min(mini,diff3)<<"\n";
        }
    }
    return 0;
}*/

//B
/*int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _{0};
    cin >> _;
    while (_--) {
        ll n{0};
        string s;
        cin >> n >> s;
        map<char,ll> mpp;
        for(ll i{1} ; i < n-1 ; ++i) ++mpp[s[i]];
        char ans;
        for( auto [ele,freq]:mpp ){
            if(freq==1){
                ans = ele ;
                break;
            }
        }
        ll count = mpp.size();
        if(ans==s[0] or ans==s[n-1]){
            cout << count << "\n";
        }else {
            cout << count-1 <<"\n";
        }
    }
    return 0;
}*/

//C
/*int32_t main(){
      int _{0};
      cin>>_;
      while(_--){
            int n;
            cin>>n;
            string a,b;
            cin>>a;
            cin>>b;
            ll ae=0 , ao=0 , bo=0 , be=0;
            for(int i=0;i<n;i++){
                  if(a[i]=='1'){
                        if(i%2==0){
                              ae++;
                        }
                        else{
                              ao++;
                        }
                  }
                   if(b[i]=='1'){
                        if(i%2==0){
                              be++;
                        }
                        else{
                              bo++;
                        }
                  }
            }
            if(ae==be && ao==bo){
                  cout<<"Yes"<<endl;
            }
            else{
                  cout<<"No"<<endl;
            }
      }
      return 0;
}*/
