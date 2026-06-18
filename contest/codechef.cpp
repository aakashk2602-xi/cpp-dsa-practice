#include<bits/stdc++.h>
#include <stdexcept>
using namespace std;

//Duplicate element check
bool hasDuplicate(const vector<int>& nums) {
    // write your code here
    auto beg = nums.begin();
    auto end = nums.end();
    for ( auto i{beg} ; i != end ; ++i ){
        for ( auto j{i+1} ; j != end ; ++j )
            if ( *i == *j ){
                return true;
            }
    }
    return false;
}

//to return local peak element index
int peakElement( vector<int>& nums ){
    int len = nums.size();
    if ( nums[0] > nums[1] ){ return 0; }
    
    if (nums[len -1 > len - 2]){ return len - 1 ; }
    
    for ( auto i{1} ; i!= len -1 ; i++ ){
        if ( nums[i] > nums[i-1] && nums[i] > nums[i+1] ){
            return nums[i];
        }
    }
    throw runtime_error("Not found");
}

//matrix median where every row is sorted and flattened
int findMedian(vector<vector<int>>& matrix, int N, int M) {

    int low = 1;
    int high = 1e9;

    int req = (N * M) / 2;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        int cnt = 0;

        // count elements <= mid
        for(int i = 0; i < N; i++) {

            cnt += upper_bound(
                matrix[i].begin(),
                matrix[i].end(),
                mid
            ) - matrix[i].begin();
        }

        if(cnt <= req) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return low;
}
