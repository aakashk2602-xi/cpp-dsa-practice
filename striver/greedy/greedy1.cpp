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

// Job sequencing
/*struct Job{
   ll id{0};
   ll dead{0};
   ll profit{0}; 
};

class Solution {
    public:
        inline bool static comparison(Job a, Job b){return (a.profit>b.profit);}
        pair <ll,ll> JobScheduling(Job arr[], int n){
        sort(arr, arr+n, comparison);
        ll maxi{-1};
        for (ll i{1};i<n;i++) maxi = max(maxi, arr[i].dead);
        ll hash[maxi+1];
        for(ll i{0}; i <= maxi; i++) hash[i] = -1;  
        ll countJobs=0,jobProfit = 0;
        for(ll i{0};i<n;i++){
            for(ll j{arr[i].dead};j>0;j--){
                if (hash[j]==-1) {
                    hash[j]=i;
                    countJobs++;
                    jobProfit+=arr[i].profit;  
                    break;
                }
            }
        }
    return make_pair(countJobs, jobProfit);
    }
};

int main() {
   ll n{4};
   Job arr[] = {{1,4,20},{2,1,10},{3,2,40},{4,2,30}};

   Solution ob;
   pair <ll,ll> ans = ob.JobScheduling(arr, n);
   cout << ans.first << " " << ans.second << endl;
   return 0;
}*/
