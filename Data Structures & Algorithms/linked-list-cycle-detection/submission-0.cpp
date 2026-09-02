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
    bool hasCycle(ListNode* head) {

        // Use unordered set to store only one value if needed
        unordered_set<ListNode*> map;  
        
        // While not at end of list
        while (head != nullptr){
            // Check if node has already been visited
            if (map.find(head) != map.end()){
                return true;
            }
            map.insert(head); // Use insert() to insert into map or set
            head = head->next; 
        }
    return false;
    }
};
