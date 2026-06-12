
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def create_from_list(self,arr):
        if not arr:
            return
        self.head = Node(arr[0])
        last:Node = self.head

        for i in arr[1:]:
            newNode = Node(i)
            last.next = newNode
            last = newNode

    def count_total_nodes(self):
        count = 1
        current_node:Node = self.head
        while current_node.next is not None:
            count += 1
            current_node = current_node.next
        return count



llist = LinkedList()
llist.create_from_list([1,2,3,4,5])

total_nodes = llist.count_total_nodes()
print("The total nodes are: ",total_nodes)

total_nodes_using_recursion = llist.count_nodes_using_recursion()
print("The total nodes using recursion are: ", total_nodes_using_recursion)

