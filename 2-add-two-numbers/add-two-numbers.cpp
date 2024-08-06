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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
    ListNode* current = dummyHead;
    int carry = 0;
    
    // Traverse both lists
    while (l1 != nullptr || l2 != nullptr || carry > 0) {
        int sum = carry;
        
        // Add the current values of l1 and l2 to the sum
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next; // Move to the next element in l1
        }
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next; // Move to the next element in l2
        }
        
        // Update carry for the next iteration
        carry = sum / 10;
        
        // Create a new node with the digit value of sum mod 10
        ListNode* newNode = new ListNode(sum % 10);
        // Link the new node to the current node
        current->next = newNode;
        
        // Move the current node to the next node
        current = current->next;
    }
    
    // If there is a carry remaining, add a new node for it
    if (carry > 0) {
        current->next = new ListNode(carry);
    }
    
    // Return the result linked list, skipping the initial dummy node
    return dummyHead->next;
}
};