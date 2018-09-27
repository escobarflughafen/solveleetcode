//
// Created by Yashushi on 2018/09/26.
// passed in 0926'18 14:00
//
#include "include/common.h"
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedSortedArray;
        int i = 0;
        int j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] >= nums2[j]){
                mergedSortedArray.push_back(nums2[j++]);
            } else{
                mergedSortedArray.push_back(nums1[i++]);
            }
        }

        if(i == nums1.size() && j < nums2.size()){
            while(j < nums2.size()){
                mergedSortedArray.push_back(nums2[j++]);
            }
        } else{
            while(i < nums1.size()){
                mergedSortedArray.push_back(nums1[i++]);
            }
        }

        if(mergedSortedArray.size() % 2 == 1) return mergedSortedArray[mergedSortedArray.size() / 2];
        return (mergedSortedArray[mergedSortedArray.size()/2 - 1] + mergedSortedArray[mergedSortedArray.size()/2])*0.5;
    }


};