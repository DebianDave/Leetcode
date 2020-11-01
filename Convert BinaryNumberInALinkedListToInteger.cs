/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public int GetDecimalValue(ListNode head) {
        if(head == null || head.val == null)
        {
            return 0;
        }
        string accumulator = "";
        while(head != null && head.val != null)
        {
            accumulator += head.val;
            head = head.next;
        }
        return Convert.ToInt32(accumulator, 2);
    }
}
