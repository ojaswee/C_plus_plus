'''Linked List is one of the important data structure
Here I have created double linked List

This will display newly added element and
total number of elements currently in the list
'''
class Node:
    def __init__(self, _id):
        self.id = _id
        self.Next = None
        self.previous = None

class LL:
    def __init__(self):
        self.head = None
        self.countNodes = 0

    def addNode(self, id):
        newNode = Node(id)  # first make the received value a node
        currentNode = self.head
        #if this is the first element in the list
        if self.head is None:
            self.head = newNode
            self.countNodes +=1

        else:
            currentNode.next = newNode
            self.countNodes += 1
        print newNode.id,'\t', self.countNodes

    def deleteNode(self,id):
        currentNode =self.head
        # if current node is the element to delete
        while currentNode.next:
            # print currentNode.id
            if currentNode.id == id:
                nextNode = currentNode.next
                previous = currentNode.previous
                break
            # currentNode = currentNode.next

#Entry point for program execution
newLL = LL()

newLL.addNode(5)
newLL.addNode(10)
newLL.addNode(3)
newLL.addNode(0)
newLL.deleteNode(5)