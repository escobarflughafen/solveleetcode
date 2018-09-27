//
// Created by Yashushi on 2018/09/27.
//

#include "include/common.h"

class Solution {
public:
    bool isNumber(string s) {
        int sepratorCount = 0;
        int expnCount = 0;
        for(int i=0; i < s.length(); i++){
            if((s[i] < '0'  && s[i] != '.') || (s[i] > '9' && s[i] != 'e')) return false;
            if(s[i] == '.'){
                if(sepratorCount > 0) return false;
                sepratorCount++;
            }
            if(s[i])

        }
    }
};