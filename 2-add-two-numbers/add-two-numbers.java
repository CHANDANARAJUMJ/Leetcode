class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        // Initialize a dummy node to act as the head of the new linked list
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;
        int carry = 0;

        // Iterate while either list has nodes or there is a carry
        while (l1 != null || l2 != null || carry > 0) {
            // Get values from the current nodes or 0 if the node is null
            int value1 = (l1 != null) ? l1.val : 0;
            int value2 = (l2 != null) ? l2.val : 0;

            // Calculate the sum of the two digits and the carry
            int sum = value1 + value2 + carry;
            carry = sum / 10; // Update carry for the next iteration
            current.next = new ListNode(sum % 10); // Create a new node with the digit

            // Move to the next nodes in the lists
            current = current.next;
            if (l1 != null) l1 = l1.next; // Move to the next node in l1
            if (l2 != null) l2 = l2.next; // Move to the next node in l2
        }

        // Return the next node of dummy (the head of the new list)
        return dummy.next;
    }
}