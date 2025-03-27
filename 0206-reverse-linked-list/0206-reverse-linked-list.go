/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
temp := head
var prev *ListNode

for temp != nil {
    front := temp.Next;
    temp.Next = prev;
    prev = temp;
    temp = front;
}
return prev;    
}