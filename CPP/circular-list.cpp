struct Node {
  int data;
  Node* next;
};

Node* deleteNode(Node* head, int key) {
  if (head == nullptr) {
    return head;
  }

  Node* prev = nullptr;
  Node* curr = head;

  // Check if the node to be deleted is the head node
  if (curr->data == key) {
    // If the list has only one node
    if (curr->next == head) {
      delete curr;
      head = nullptr;
      return head;
    }

    // If the list has more than one node
    while (curr->next != head) {
      curr = curr->next;
    }

    curr->next = head->next;
    delete head;
    head = curr->next;
    return head;
  }

  // Traverse the list to find the node to be deleted
  while (curr->next != head && curr->next->data != key) {
    prev = curr;
    curr = curr->next;
  }

  // If the node to be deleted is not found
  if (curr->next == head) {
    return head;
  }

  // If the node to be deleted is the last node
  if (curr->next->next == head) {
    prev->next = head;
    delete curr->next;
    return head;
  }

  // Delete the node
  prev->next = curr->next->next;
  delete curr->next;
  return head;
}
