/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        while(temp){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }
        temp = head;
        while(temp){
            Node *copyNode = temp->next;
            copyNode->random = temp->random ? temp->random->next : nullptr;
            temp = temp->next->next;
        }

        Node* dummy = new Node(0);
        Node *copyTemp = dummy;
        temp = head;

        while(temp){
            Node* cpN = temp ->next;
                        temp->next = cpN->next;

            
            copyTemp->next = cpN;
            copyTemp = cpN;
            temp= temp->next;


        }
        return dummy->next;

              
    }
};