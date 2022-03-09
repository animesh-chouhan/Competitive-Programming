class LinkedList:
    def __init__(self) -> None:
        self.head = None

    def show(self):
        current_node = self.head
        while current_node != None:
            print(current_node.data)
            current_node = current_node.next


class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.next = None


llist = LinkedList()
llist.head = Node(100)

n2 = Node(50)
n3 = Node(70)

llist.head.next = n2
n2.next = n3

llist.show()
