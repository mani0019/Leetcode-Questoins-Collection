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
    ListNode* sortList(ListNode* head) {
        vector<int>LL ;
        ListNode* temp = head;
        while( temp){
            LL.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* dummy = new ListNode(100);
        ListNode* tempH = dummy;

        sort(LL.begin(),LL.end());

        for(int i =0;i<LL.size();i++){
            ListNode* Data = new ListNode(LL[i]);
            dummy ->next = Data;
            dummy = dummy->next;
            
        }
        return tempH->next;
        
    }
};