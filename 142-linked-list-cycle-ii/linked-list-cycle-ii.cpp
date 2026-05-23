class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        
        // Step 1: Find if a cycle exists
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            // Cycle detected
            if (slow == fast) {
                ListNode *entry = head;
                // Step 2: Find the entry point of the cycle
                while (entry != slow) {
                    entry = entry->next;
                    slow = slow->next;
                }
                return entry;
            }
        }
        
        return NULL; // No cycle found
    }
};