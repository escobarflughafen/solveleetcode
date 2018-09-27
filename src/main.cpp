#include <iostream>
#include "004.cpp"

int main() {
    Solution sol;

    vector<int> vec1{1,2};
    vector<int> vec2{3,4};
    cout<<sol.findMedianSortedArrays(vec1, vec2);


    return 0;
}