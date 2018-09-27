//
// Created by Yashushi on 2018/09/20.
//

#include "include/common.h"

class Solution{
public:
    int lengthOfLongestSubstring(string s){
        if(s.length() == 0) return 0;
        if(s == " ") return 1;
        int startpos = 0;
        int alphacounter[256]  = {};
        for(int t=0; t<256; t++){
            alphacounter[t] = 0;
        }
        vector<int> lenrec;
        for(int i=0; i<s.length(); i++){
            if(alphacounter[s[i]] == 0){
                alphacounter[s[i]]++;
            }   else    {
                lenrec.push_back(i - startpos);
                if(i == s.length() - 1) break;
                i = ++startpos;

                for(int j=0; j<256; j++){
                    alphacounter[j] = 0;
                }

            }
            for(int ii = startpos; ii< i; ii++){
                cout<<s[ii];
            }
            cout<<endl;
        }

        int max = lenrec[0];
        for(int j = 1; j < lenrec.size(); j++){
            if(lenrec[j] > max) max = lenrec[j];
        }
        return max;
    }


};