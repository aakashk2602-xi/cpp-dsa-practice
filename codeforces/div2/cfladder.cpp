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
