class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert_at_beginning(self, data):
        new_node = Node(data)
        new_node.next = self.head
        if self.head is not None:
            self.head.prev = new_node
        self.head = new_node
        if self.tail is None:
            self.tail = new_node

    def insert_at_end(self, data):
        new_node = Node(data)
        if self.tail is not None:
            self.tail.next = new_node
        new_node.prev = self.tail
        self.tail = new_node
        if self.head is None:
            self.head = new_node

    def insert_after_node(self, data, after_node):
        if after_node is None:
            raise ValueError("Invalid node")

        new_node = Node(data)
        new_node.next = after_node.next
        if after_node.next is not None:
            after_node.next.prev = new_node
        after_node.next = new_node
        new_node.prev = after_node

    def delete_at_beginning(self):
        if self.head is None:
            return None

        deleted_node = self.head
        self.head = self.head.next
        if self.head is not None:
            self.head.prev = None
        deleted_node.next = None
        deleted_node.prev = None

        if self.head is None:
            self.tail = None

        return deleted_node.data

    def delete_at_end(self):
        if self.tail is None:
            return None

        deleted_node = self.tail
        self.tail = self.tail.prev
        if self.tail is not None:
            self.tail.next = None
        deleted_node.next = None
        deleted_node.prev = None

        if self.head is None:
            self.tail = None

        return deleted_node.data

    def delete_node(self, node):
        if node is None:
            raise ValueError("Invalid node")

        if node is self.head:
            self.delete_at_beginning()
            return

        if node is self.tail:
            self.delete_at_end()
            return

        node.prev.next = node.next
        node.next.prev = node.prev
        node.next = None
        node.prev = None

    def display(self):
        current_node = self.head
        while current_node is not None:
            print(current_node.data)
            current_node = current_node.next

    def reverse(self):
        current_node = self.head
        while current_node is not None:
            temp = current_node.next
            current_node.next = current_node.prev
            current_node.prev = temp
            current_node = temp

        temp = self.head
        self.head = self.tail
        self.tail = temp
