//
// Created by Yashushi on 2018/09/20.
//
#include "include/common.h"

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(nullptr){}
};


class Solution{
public:
    ListNode* addTwoNumbers2(ListNode *l1, ListNode *l2){
        ListNode *answer = (ListNode*) malloc(sizeof(ListNode));
        ListNode *rec = answer;
        ListNode *a = l1;
        ListNode *b = l2;
        bool flag = false;
        while(a->next !=nullptr || b -> next != nullptr){
            if(a != nullptr && b != nullptr){
                if(a->val + b->val >= 10){
                    answer->val = a->val + b->val -10 + (flag == true)?1:0;
                    flag = true;
                } else{
                    answer->val = a->val + b->val + (flag==true)?1:0;
                    flag = false;
                }
            }

            if(a == nullptr){
                answer->val = b->val + (flag == true)?1:0;
            }
            if(b == nullptr){
                answer->val = a->val + (flag == true)?1:0;
            }
            if(answer->val >= 10){
                answer->val -= 10;
                flag = true;
            }
            answer->next = (ListNode *) malloc(sizeof(ListNode));
            answer = answer->next;
            a = (a->next == nullptr)?nullptr:a->next ;
            b = (b->next == nullptr)?nullptr:b->next;
        }
        return rec;
    }

    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2){
        ListNode* dummyHead = new ListNode(0);
        ListNode *p = l1, *q = l2, *curr = dummyHead;
        int carry = 0;
        while (p != nullptr || q != nullptr) {
            int x = (p != nullptr) ? p -> val : 0;
            int y = (q != nullptr) ? q -> val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr -> next = new ListNode(sum % 10);
            curr = curr -> next;
            if (p != nullptr) p = p -> next;
            if (q != nullptr) q = q -> next;
        }
        if (carry > 0) {
            curr -> next = new ListNode(carry);
        }
        return dummyHead -> next;
    }
};