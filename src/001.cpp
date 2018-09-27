//
// Created by Yashushi on 2018/09/20.
//passed with 212ms 0920'18

#include "include/common.h"
class Solution{
public:
    vector<int> twoSum(vector<int> & nums, int target){
        vector<int> ret;
        if(nums.empty()) return ret;
        for(int i=0; i<nums.size(); i++ ){
            for(int j = i+1; j!=i && j< nums.size(); j++){
                if (nums[i] + nums[j] == target )  {
                    ret.push_back(i);
                    ret.push_back(j);
                    break;
                }
            }
        }
        return ret;
    }
};