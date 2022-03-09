def pairSum(self, head: Optional[ListNode]) -> int:
    p = head
    l = []
    while p.next != None:
        l.append(p.next)
