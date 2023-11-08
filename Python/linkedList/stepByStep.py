class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node

    def delete(self, data):
        node_to_delete = self.head

        while node_to_delete is not None and node_to_delete.data != data:
            node_to_delete = node_to_delete.next

        if node_to_delete is None:
            return

        if node_to_delete is self.head:
            self.head = node_to_delete.next
            if node_to_delete.next is not None:
                node_to_delete.next.prev = None
        elif node_to_delete is self.tail:
            self.tail = node_to_delete.prev
            if node_to_delete.prev is not None:
                node_to_delete.prev.next = None
        else:
            node_to_delete.prev.next = node_to_delete.next
            node_to_delete.next.prev = node_to_delete.prev

        node_to_delete.next = None
        node_to_delete.prev = None

    def display(self):
        node = self.head

        while node is not None:
            print(node.data)
            node = node.next

    def reverse(self):
        current = self.head
        previous = None

        while current is not None:
            next = current.next
            current.next = previous
            current.prev = next
            previous = current
            current = next

        self.head = previous


linked_list = DoublyLinkedList()

linked_list.insert(1)
linked_list.insert(2)
linked_list.insert(3)

print("Displaying the linked list:")
linked_list.display()

print("Deleting the node with data 2:")
linked_list.delete(2)

print("Displaying the linked list:")
linked_list.display()

print("Reversing the linked list:")
linked_list.reverse()

print("Displaying the reversed linked list:")
linked_list.display()
