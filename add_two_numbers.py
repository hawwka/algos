from typing import Optional

# Definition for singly-linked list.
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        if l1 is None:
            return l2  
        if l2 is None:
            return l1  
            
        return self.helper(l1, l2)

    def helper(self, l1: ListNode, l2: ListNode) -> ListNode:
        result = ListNode()
        current = result
        carry = 0

        while l1 or l2 or carry:
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0
            
            total = val1 + val2 + carry
            carry = total // 10
            
            current.next = ListNode(total % 10)
            current = current.next
            
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            
        return result.next
         
        

