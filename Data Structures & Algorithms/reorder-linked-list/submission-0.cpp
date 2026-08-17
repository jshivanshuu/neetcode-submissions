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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<ListNode*> vec;
        ListNode* end = head;
        while(end!=nullptr){
            vec.push_back(end);
            end = end->next;
        }
        int n = vec.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            vec[i]->next = vec[j];
            i++;
            vec[j]->next = vec[i];
            j--;
        }
        vec[i]->next = nullptr;
    }
};
