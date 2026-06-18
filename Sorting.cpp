#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll ;

// 2-way-mergesort - O( nlogn )

void merger(vector<size_t>& v, size_t low, size_t mid, size_t high){
    vector<size_t> temp;
    size_t left = low;
    size_t right = mid + 1;

    while(left <= mid and right <= high){
        if(v[left] <= v[right])
            temp.push_back(v[left++]);
        else
            temp.push_back(v[right++]);
    }

    while(left <= mid)
        temp.push_back(v[left++]);

    while(right <= high)
        temp.push_back(v[right++]);

    for(size_t i = low; i <= high; ++i)
        v[i] = temp[i - low];
}

void mergesort(vector<size_t>& v, size_t low, size_t high){
    if(low >= high) return;
    size_t mid = low + (high - low) / 2;
    mergesort(v, low, mid);
    mergesort(v, mid + 1, high);
    merger(v, low, mid, high);
}

//quicksort - O(nlogn)


ll f( vector<ll> &v , ll low , ll high ){
    ll pivot = v[low];
    ll i = low;
    ll j = high;
    while ( i<j ) {
        while (v[i]<=pivot and i<=high-1) { ++i; }
        while (v[j]>=pivot and j>=low+1) { --j; }
        if( i < j ) swap(v[i],v[j]);
    }
    swap(v[low],v[j]);
    return j;
}

void qs( vector<ll> &v , ll low , ll high ){
    if( low >= high ) return ;
    if(low < high){
        ll partition_index = f(v , low, high);
        qs(v, low ,partition_index-1);
        qs(v, partition_index+1 , high);
    }
}

// selection sort - O( n2 ) - for worst,average,best cases
void selection_sort( vector<ll>& v , ll n ){
    for( ll i{0} ; i <= n-2 ; ++i ){
        ll min = i;
        for( ll j{i} ; j<= n-1 ; ++j ){
            if( v[min] > v[j] ){
                min = j;
            }
        }
        ll temp = v[min];
        v[min] = v[i];
        v[i] = temp;
    }
}

//bubble sort - O( n2 ) - for worst , average  //- O(n) - for best cases
void bubble_sort( vector<ll>& v , ll n ){
    for( ll i{n-1} ; i>=0 ; --i ){
        for( ll j{0} ; j<=i-1 ; ++j ){
            if( v[j] > v[j+1] ){
                ll temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

//insertion sort - O(n2) - for worst , average  //- O(n) - for best cases
void insertion_sort( vector<ll>& v , ll n ){
    for( ll i{0} ; i <= n-1 ; ++i ){
        ll j=i;
        while ( j>0 and v[j-1]>v[j] ){
            ll temp = v[j-1];
            v[j-1] = v[j];
            v[j] = temp;
            j--;
        }
    }
}





























int main(){
    size_t x;
    vector<size_t> v;

    while(cin >> x)
        v.push_back(x);

    if(v.empty()){
        cout << "\n";
        return 0;
    }

    size_t low = 0;
    size_t high = v.size() - 1;
    mergesort(v, low, high);

    for(size_t x : v) cout << x << " ";
    cout << "\n";

    //quicksort 
    ll n;
    vector<ll> v1(n);
    qs( v1 , 0 , n-1 );

    for(auto i : v){ cout << i << " "; }

    return 0;
}