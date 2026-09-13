#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sort(x) sort(all(x))
#define rsort(x) sort(all(x), [](int a, int b) { return a > b; })

// A - Robot cleaner
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
