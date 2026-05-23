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
        std::unordered_set<ListNode*> visited;
        
        ListNode* curr = head;
        while (curr != nullptr) {
            // Checks if this specific Node pointer has been seen before
            if (visited.count(curr)) {
                return curr; // Returns the exact Node object
            }
            
            visited.insert(curr);
            curr = curr->next;
        }
        
        return nullptr; // No cycle found
    }
};