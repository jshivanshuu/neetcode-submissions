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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
                if(head == nullptr || head->next == nullptr) return nullptr;
        int count= 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            count++;
            temp = temp->next;
        }
        int diff = count-n;
            temp = head;
        ListNode* prev = nullptr;
        if(diff == 0){
         ListNode* del = head;
        head = head->next;
        delete del;
        return head;
}
        while(diff--){
            prev = temp;
            temp = temp->next;
        }
        prev->next = prev->next->next;
        temp->next = nullptr;
        delete temp;
        return head;
    }
};
