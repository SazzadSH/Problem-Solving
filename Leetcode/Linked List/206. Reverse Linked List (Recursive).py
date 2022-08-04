# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reversal(self, head, new_head):
        if head == None:
            return new_head
			
        next_node = head.next
        head.next = new_head
		
        return self.reversal(next_node, head)
    
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        return self.reversal(head, None)
