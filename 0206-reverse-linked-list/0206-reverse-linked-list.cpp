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
    ListNode* reverseList(ListNode* head) {
        int len  =  0;
        ListNode* temp = head;
        while(temp){
            temp=temp->next;
            len++;

        }
        ListNode * headstr = new ListNode(100);
        ListNode * curr = headstr ;
        temp = head;
        while(temp){
            ListNode* temp1 = new ListNode(temp->val);
            temp1->next = curr->next;
            curr->next = temp1;
            
            temp= temp->next;
            
        }
        return headstr->next;
        
    }
};