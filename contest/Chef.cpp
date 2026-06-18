#include<bits/stdc++.h>
using namespace std; 

//planting trees
bool comp(long long a,long long b ){ 
  return (a > b);
}
int main(){
  int t; 
  cin >> t; 
  while(t--){
    long long n,m,k; 
    cin >> n >> m >> k;
    vector<long long> arr(n,0);
    for(long long i=0;i<n;i++){
      cin >> arr[i];
    }
    vector<long long> p;
    long long sump = 0;
    for(long long i =0;i<n;i++){
    if(arr[i]%k != 0){  p.push_back(arr[i]%k);
      sump += arr[i]%k;
    }
    }
    long long sum = 0;
    for(long long i =0;i<n;i++){
      sum += arr[i]/k;
    }
    long long x = k+1;
    long long y = m/x;
      long long q = m%x;
    if(x*sum >= m){
      cout << y*k + q<< endl;
    }
    else{
      long long ans = sum*k;
      m = m-x*sum;
      sort(p.begin(),p.end(),comp);
      for(long long i=0;i<p.size();i++){
        if(m == 0) break;
         if(p[i] < m){
          m = m - p[i] - 1;
          ans += p[i];
         }
         else if(p[i] == m){
           m = m - p[i];
           ans += p[i];
         }
         else{
          ans += m;
          m = 0;
          break;
         }
      }
     cout << ans << endl;
    }

  }
}

//