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
        ListNode* currentNode = head;
        ListNode* prevNode = NULL;

// Same logic, just use temporary variable when changing pointers to make it easier
// Also always use logic current Node is null when traversing and use prevNode variable
// to access last node of the list (rather than using current->next != nullptr).

        while (currentNode != NULL){
            ListNode* temp = currentNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = temp;
        }

        return prevNode;

    }
};
