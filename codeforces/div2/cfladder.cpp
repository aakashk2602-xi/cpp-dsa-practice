#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// div2 763 A
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},m{0},current_row{0},current_column{0};      // size and current location variable
        cin>>n>>m>>current_row>>current_column;

        ll destination_row{0},destination_column{0};        // Destination location
        cin>>destination_row>>destination_column;

        ll slide_x{1},slide_y{1};
        ll count_x{0},count_y{0};
        while(current_row!=destination_row){
            if(current_row<=0 || current_row>=n){
                slide_x=-(slide_x);
            }
            current_row+=slide_x;
            ++count_x;
        }
        while(current_column!=destination_column){
            if(current_column<=0 || current_column>=m){
                slide_y=-(slide_y);
            }
            current_column+=slide_y;
            ++count_y;
        }
        cout<<min(count_x,count_y)<<"\n";
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// 1617B - GCD problem div2 761 B
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0};cin>>n;
        ll a{0},b{0},c{0};
        if(n&1){
            --n;
            if((n/2)%2==0) cout<<n/2+1<<" "<<n/2-1<<" "<<"1\n";
            else cout<<n/2+2<<" "<<n/2-2<<" "<<"1\n";
        }else{
            n-=2;
            if(n==10)  cout<<"6 4 2\n";
            else if(n==8)  cout<<"7 2 1\n";
            else if(n==12) cout<<"11 2 1\n";
            else if((n/2)%4==0) cout<<n/2+2<<" "<<n/2-2<<" "<<"2\n";
            else if( n>12 && (n/2)%2==0 && (n/2)%4!=0) cout<<n/2+4<<" "<<n/2-4<<" "<<"2\n";
            else cout<<n/2+1<<" "<<n/2-1<<" "<<"2\n";
        }
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// Codeforces div2 377 A - Buy a Shovel
/*int32_t main(){
    ll k{0},r{0};cin>>k>>r;
    ll ans{LLONG_MAX};
    for(ll i{1};i<=9;i++) if((k*i)%10==0 || (k*i)%10==r) {ans=min(ans,i); continue;}
    cout<<ans<<"\n";

    
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// Codeforces div2 189A - A Number Between Two Others
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll x{0},y{0};cin>>x>>y;
        ll z{((y/x)-1)*x};
        if(x<z && z<y && y%z!=0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}*/

// Codeforces div2 189B
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        string s;cin>>s;
        ll ans{0};
        for(int32_t i{0};i<int32_t(s.size()-1);i++) ans+=(s[i]==s[i+1]);
        if(ans<=2) cout<<"Yes\n";
        else cout<<"No\n";
        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/

// Codeforces div2 2136B - Like the bitset
/*int32_t main(){
    ll _{0};cin>>_;
    while(_--){
        ll n{0},k{0};cin>>n>>k;
        string s;cin>>s;
        vector<ll>ans(n,0);
 
        // making of an answer
        ll specifier{1};
        ll count1{0};
        for(ll i{0};i<n;i++){
            if(s[i]=='1'){
                ans[i]=specifier;
                specifier++;
                count1++;
            }
        }
        for(ll i{0};i<n;i++){
            if(s[i]=='0'){
                ans[i]=specifier;
                specifier++;
            }
        }
 
        // checking of YES/NO?
        ll maxcurr{0};
        ll currcount{0};
        for(ll i{0};i<n;i++){
            if(s[i]=='1') ++currcount;
            else currcount=0;

            maxcurr=max(maxcurr,currcount);
        }
        if(maxcurr>=k && count1!=0) cout<<"No\n";
        else{
            cout<<"Yes\n";
            for(ll i{0};i<n;i++) cout<<ans[i]<<" ";
            cout<<"\n";
        }
 
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}*/
