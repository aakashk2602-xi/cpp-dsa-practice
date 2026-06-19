
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& v){
    for(auto i : v ){
        cout << i << "  " ;
    }
    cout << "\n";
}

int f(int i, vector<int> v ,int count ,  int sum,int arr[],int n){
    if ( i == n ){
        if(sum ==3 ){ return 1; }
        return 0;
    }
    sum+=arr[i];
    v.push_back(arr[i]);
    int l = f(i+1,v,count,sum,arr , n );
    v.pop_back();
    sum-= arr[i];
    int r = f(i+1, v,count,sum, arr , n );
    return l+r;
}

int main(){
    int n{0};
    cin >> n;
    int arr[n];
    for ( auto &i : arr ){ cin >> i; }
    vector<int> v;
    int sum{0},count{0};
    cout << f( 0 , v,count , sum , arr , n );
    return 0;
}
