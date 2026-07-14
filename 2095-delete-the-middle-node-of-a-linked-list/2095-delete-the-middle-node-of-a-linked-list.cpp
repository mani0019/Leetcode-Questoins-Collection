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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next ==nullptr) return head->next;
        int len  =0 ;
        ListNode * temp = head;

        while(temp){
            temp = temp->next ;
            len++;
        }
      len =len/2;
 

        temp = head;
        for(int i =0;i<len-1 ;i++){
            temp= temp->next;

        }
        temp->next = temp->next->next ;

        return head;
    }
};