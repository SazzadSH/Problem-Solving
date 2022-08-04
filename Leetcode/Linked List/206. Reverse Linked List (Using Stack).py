# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
	def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
		
		if head == None:
			return head
		
		node_items = []
		
		while head != None:
			node_items.append(head.val)
			head = head.next
		
		head = ListNode(node_items.pop())
		current_node = ListNode()
		
		if node_items:
			head.next = current_node
		
		while node_items:
			current_node.val = node_items.pop()
			
			if node_items:				
				current_node.next = ListNode()
				current_node = current_node.next
		
		return head
