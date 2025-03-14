class Queue:
    def __init__(self, n):
        self.q = []
        self.size = n
        self.front = -1
        self.rear = -1

    def isFull(self):
        if self.rear==self.size-1:
            return True
        else: return False
    
    def isEmpty(self):
        if self.front==self.rear:
            return True
        else: return False
    
    def enqueue(self, elem):
        if not self.isFull():
            self.q.append(elem)
            self.rear += 1
        else: print("Queue overflow!")
    
    def dequeue(self):
        if not self.isEmpty():
            self.front += 1
            self.q.remove(self.q[0])
        else: print("Queue underflow!")


q = Queue(5)
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.enqueue(5)

q.dequeue()
q.dequeue()
q.dequeue()
q.dequeue()
q.dequeue()

q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.enqueue(5)

q.dequeue()