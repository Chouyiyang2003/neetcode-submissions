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

        int num1 = 0;
        int num2 = 0; 
        int i = 0;
        while(l1 != nullptr){
            num1 += (l1->val) * pow(10,i);
            cout << l1->val << endl;
            l1 = l1->next;
            i++;
        }
        i = 0;
        while(l2 != nullptr){
            num2 += (l2->val) * pow(10,i);
            l2 = l2->next;
            i++;
        }
        int sum = num1 + num2;
        cout << sum << endl;

        while(sum>=1){
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            sum /= 10;
        }
        curr->next = nullptr;
        return ans->next;
    }
};
