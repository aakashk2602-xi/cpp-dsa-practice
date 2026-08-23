#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Assign cookies
/*void solve(){
    ll n{0},m{0},count{0};
    cin>>n>>m;
    vector<ll> gfact(n,0),hunger(m,0);
    for(size_t i{0};i<n;++i) cin>> gfact[i];
    for(size_t i{0};i<m;++i) cin>> hunger[i];
    sort(gfact.begin(),gfact.end());
    sort(hunger.begin(),hunger.end());
    size_t i{0},j{0};
    while(i<n && j<m){
        if(hunger[i] <= gfact[j]){
            ++i;++j;
            ++count;
        }else{
            ++i;
        }
    }
    for(size_t i{0};i<n;++i) cout<<gfact[i]<<" ";
    cout<<"\n";
    for(size_t i{0};i<m;++i) cout<<hunger[i]<<" ";
    cout<<"\n";
    cout<<count<<"\n";
}*/

// Lemonade change
/*bool solve(){
    ll n{0};
    cin>>n;
    vector<ll> bill(n,0);
    for(size_t i{0};i<n;++i) cin>>bill[i];
    ll five{0},ten{0};
    for(size_t i{0};i<n;++i){
        if(bill[i]==5) ++five;
        else if(bill[i]==10){
            if(five){--five;--ten;}
            else return false;
        }else {
            if(five && ten){--five;--ten;}
            else if(five>=3) five-=3;
            else return false;
        }
    }
    return true;
}*/

// Shortest job first(SJF) CPU Scheduling
/*void solve(){
    ll n{0},total{0},wt_total{0};
    cin>>n;
    vector<ll> time(n,0);
    for(size_t i{0};i<n;++i) cin>>time[i];
    sort(time.begin(),time.end());
    for(size_t i{0};i<n;++i) {wt_total+=total; total+=time[i];}
    cout<<wt_total/n<<'\n';
}*/

// Jump - I
/*bool solve(){
    size_t n{0},max_index{0};
    cin>>n;
    vector<size_t> jump(n,0);
    for(size_t i{0};i<n;++i) cin>>jump[i];
    for(size_t i{0};i<n;++i){
        if(max_index<i) return false;
        max_index=max(max_index,i+jump[i]);
    }
    return true;
}*/

// Jump - II
//through recursion
/*size_t solve(vector<size_t>& v,size_t n , size_t index , size_t jumps ){
    if(index>=n-1) return jumps;
    size_t mini=INT_MAX;
    for(size_t i{0};i<n;++i) mini = min(mini,solve(v,n,index+1,jumps+1));
    return mini;
}*/
//

//through greedy
/*void solve(){
    ll n{0};
    cin>>n;
    vector<size_t> potential(n,0);
    for(size_t i{0};i<n;++i) cin>>potential[i];
    size_t l{0},r{0};
    ll jumps{0};
    while(r<n-1){
        size_t farthest{0};
        for(auto index{l};index<r;++index) farthest=max(farthest,index+potential[index]);
        l=r+1;
        r=farthest;
        ++jumps;
    }

}*/

int32_t main(){
    cout<<'\n';
    return 0;
}