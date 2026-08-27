#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// N meetings in one room
/*struct meet{
    ll start{0},end{0},pos{0};
};
class Solution{
    public:
        inline bool static comp(meet m1,meet m2){return m1.end<m2.end;}
        vector<ll> meetschedule(meet arr[], ll n){
            sort(arr,arr+n,comp);
            ll freetime{arr[0].end},count{1};
            vector<ll> order={arr[0].pos};
            for(ll i{1};i<n;++i){
                if(arr[i].start>freetime){
                    ++count;
                    freetime=arr[i].end;
                    order.push_back(arr[i].pos);
                }
            }
            return order;
        }
};
int32_t main(){
    ll n{0};cin>>n;
    meet arr[n];
    for(ll i{0};i<n;++i) cin>>arr[i].start;
    for(ll i{0};i<n;++i) cin>>arr[i].end;
    for(ll i{0};i<n;++i) cin>>arr[i].pos;
    Solution ob;
    vector<ll>ans=ob.meetschedule(arr, n);
    for(auto i:ans) cout<<i<<" ";
    cout<<"\n";
}*/

// Non Overlapping Intervals
/*struct interval{
    ll start{0},end{0},pos{0};
};
class Solution{
    public:
        inline bool static comp(interval m1,interval m2){return m1.end<m2.end;}
        ll schedule(interval arr[], ll n){
            sort(arr,arr+n,comp);
            ll lasttime{arr[0].end},count{1};
            for(ll i{1};i<n;++i){
                if(arr[i].start>=lasttime){
                    ++count;
                    lasttime=arr[i].end;
                }
            }
            return n-count;
        }
};
int32_t main(){
    ll n{0};cin>>n;
    interval arr[n];
    for(ll i{0};i<n;++i) cin>>arr[i].start;
    for(ll i{0};i<n;++i) cin>>arr[i].end;
    for(ll i{0};i<n;++i) cin>>arr[i].pos;
    Solution ob;
    cout<< ob.schedule(arr, n);
    cout<<"\n";
}*/

// Insert intervals
/*vector<vector<ll>> solve(int32_t n,vector<vector<ll>>& interval,vector<ll>& newInterval){
    vector<vector<ll>> ans;
    //left
    int32_t i{0};
    while(i<n && interval[i][1]<newInterval[0]){
        ans.push_back(interval[i]);
        ++i;
    }
    //midlle interval merge
    while(i<n && interval[i][0]<=newInterval[1]){
        newInterval[0]=min(newInterval[0],interval[i][0]);
        newInterval[1]=max(newInterval[1],interval[i][1]);
        ++i;
    }
    ans.push_back(newInterval);
    //right
    while(i<n){
        ans.push_back(interval[i]);
        ++i;
    }
    return ans;
}

int32_t main(){
    int32_t n{0};cin>>n;
    vector<vector<ll>> interval(n,{0,0});
    vector<ll>newInterval(2,0);
    for(int32_t i{0};i<n;i++){
        for(int32_t j{0};j<2;j++){
            cin>>interval[i][j];
        }
    }
    cin>>newInterval[0]>>newInterval[1];
    vector<vector<ll>> ans = solve(n, interval, newInterval);
    for(auto i : ans){
        for(auto j: i){
            cout<< j << " ";
        }
        cout<<"\n";
    }
    return 0;
}*/

// Minimum number of platforms required for a railway station
