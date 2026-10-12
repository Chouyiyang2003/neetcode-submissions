/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* curr=ans;

        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int a=0, b=0;
            if(l1 != nullptr){
                a = l1->val;
                l1 = l1->next;
            } 
            if(l2 != nullptr){
                b = l2->val;
                l2 = l2->next;
            }
            int sum = a + b;
            if(carry != 0){
                sum += carry;
                carry = 0;
            }
            
            carry = sum/10;
            sum %= 10;

            curr->next = new ListNode(sum);
            curr = curr->next;
        }    
        return ans->next;    
    }
};
