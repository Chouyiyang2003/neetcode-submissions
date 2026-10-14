class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return;
        }

        // Step 1：找到中間節點
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2：切開並反轉後半段
        ListNode* curr = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;

        while(curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Step 3：交錯合併
        ListNode* l1 = head;
        ListNode* l2 = prev;

        while(l2 != nullptr) {
            ListNode* next1 = l1->next;
            ListNode* next2 = l2->next;

            l1->next = l2;
            l2->next = next1;

            l1 = next1;
            l2 = next2;
        }
    }
};