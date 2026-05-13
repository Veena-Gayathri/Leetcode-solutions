# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

import heapq
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        heap = []
        for l in lists:
            head = l
            while head :
                heapq.heappush(heap, head.val)
                head = head.next
        dummy = ListNode(0)
        head = dummy
        while heap:
            head.next = ListNode(heapq.heappop(heap),None)
            head = head.next

        return dummy.next

