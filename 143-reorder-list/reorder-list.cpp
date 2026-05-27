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
    void reorderList(ListNode* head) {
        // Edge Case: If the list is empty, has 1 node, or 2 nodes, no
        // reordering needed
        if (!head || !head->next || !head->next->next)
            return;

        // 1. Collect all node pointers into a vector
        vector<ListNode*> nodes;
        ListNode* curr = head;
        while (curr != nullptr) {
            nodes.push_back(curr);
            curr = curr->next;
        }

        // 2. Use two pointers to weave the nodes together
        int left = 0;
        int right = nodes.size() - 1;

        while (left < right) {
            // Step A: Link the left node to the right node
            nodes[left]->next = nodes[right];
            left++; // Move left pointer forward

            // Step B: Stop if pointers met in the middle to avoid a cycle
            if (left >= right)
                break;

            // Step C: Link the right node to the next left node
            nodes[right]->next = nodes[left];
            right--; // Move right pointer backward
        }

        // 3. Crucial step: Set the next of the last node to nullptr to
        // terminate the list
        nodes[left]->next = nullptr;
    }
};