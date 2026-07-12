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
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        
        ListNode* tempSlow = head;
        ListNode* tempFast = head;
        int cnt  =0;

        while (tempFast != nullptr && tempFast->next != nullptr) {

            tempSlow = tempSlow->next;
            tempFast = tempFast->next->next;
            if(tempSlow == tempFast) break;

            
        }
        if(tempFast == nullptr || tempFast->next == nullptr) return nullptr;
        tempSlow = head;
        while(tempSlow != tempFast) {
            tempSlow = tempSlow ->next;
            tempFast = tempFast ->next;

        }

        return tempSlow;        
    }
};