/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr|| head->next ==nullptr ) return false;
        ListNode *tempSlow = head;
        ListNode *tempFast = head;

        while(tempFast!=nullptr && tempFast->next!=nullptr){
             
            tempSlow = tempSlow->next;
            tempFast = tempFast->next->next;
          
            if(tempFast == tempSlow) return true;
        }

        return false;
        
    }
};