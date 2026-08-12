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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int top =0;
        int bottom = m-1;
        int left =0;
        int right = n-1;

        vector<vector<int>> ans(m, vector<int>(n, -1));
        ListNode* temp = head;
       while(temp && (top<=bottom || left<=right)){
        for(int j = left ; j <=right && temp!=nullptr ;j++){
            ans[top][j] = temp->val;
            temp=temp->next;
        }
        top++;

        for(int i = top; i <= bottom && temp!=nullptr; i++) {
    ans[i][right] = temp->val;
    temp = temp->next;
        }
        right--;
        for(int k = right ;k>=left && temp!=nullptr;k--){
            ans[bottom][k] = temp->val;
            temp=temp->next;


        }
        bottom--;
        for(int w =bottom ;w>=top && temp!=nullptr;w--){
            ans[w][left] = temp->val;
            temp=temp->next;
        }
        left++;
        
    }
    return ans;
    }
};