from abc import ABC

class DataNotFoundError(Exception):
    pass

class Node(ABC):
    def __init__(self, data):
        self.data = data
        self.next = None
    
class LinkedList:
    def __init__(self):
        self.Head = None
    
    def insertNode(self, data):
        if not self.Head:
            self.Head = Node(data)
        else:
            newNode = Node(data)
            newNode.next = self.Head
            self.Head = newNode
    
    def displayLinkedList(self):
        temp = self.Head
        while temp:
            print(temp.data, end=", ")
            temp = temp.next
        print()

    def deletingNode(self, data):
        temp = self.Head
        if data==temp.data:
            self.Head = self.Head.next
            del temp
        else:
            try:
                while(temp.data!=data):
                    prev = temp
                    temp = temp.next
                prev.next = temp.next
                del temp
            except:
                raise DataNotFoundError("Data not found!")


ll = LinkedList()
n = int(input("How many elements you wanna enter: "))
for i in range(n):
    val = int(input(f"Enter element {i+1}: "))
    ll.insertNode(val)
ll.displayLinkedList()

ll.deletingNode(int(input("Enter the element you wanna delete: ")))
ll.displayLinkedList()