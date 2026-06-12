
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def create_from_list(self,arr: list):
        if not arr:
            return
        self.head = Node(arr[0])
        last:Node = self.head

        for i in arr[1:]:
            new_node:Node = Node(i)
            last.next = new_node
            last = new_node


    def display(self):
        current:Node = self.head
        while current is not None:
            print(current.data, end="->")
            current = current.next
        print("Completed")


if __name__ == "__main__":
    llist = LinkedList()
    llist.create_from_list([1,2,3,4,5])
    print("The data are: ")
    llist.display()



