#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void insertAtRandomPosition(int value) {
  // Generate a random position between 0 and the length of the linked list
  int position = rand() % 10;

  // Create a new node
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next = NULL;

  // If the linked list is empty, insert the new node at the beginning
  if (head == NULL) {
    head = newNode;
    return;
  }

  // Otherwise, traverse the linked list to the desired position
  struct Node *temp = head;
  for (int i = 0; i < position - 1; i++) {
    temp = temp->next;
  }

  // Insert the new node at the desired position
  newNode->next = temp->next;
  temp->next = newNode;
}

void deleteAtRandomPosition() {
  // Generate a random position between 1 and the length of the linked list
  int position = rand() % 10;

  // If the linked list is empty, there is nothing to delete
  if (head == NULL) {
    return;
  }

  // If the node to be deleted is the head node, update the head pointer
  if (position == 1) {
    head = head->next;
    free(head);
    return;
  }

  // Otherwise, traverse the linked list to the node to be deleted
  struct Node *temp = head;
  for (int i = 1; i < position - 1; i++) {
    temp = temp->next;
  }

  // Store the node to be deleted
  struct Node *nodeToDelete = temp->next;

  // Update the pointers of the adjacent nodes
  temp->next = nodeToDelete->next;
  free(nodeToDelete);
}



void printLinkedList() {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n\n");
}

int main() {
  // Insert some random values into the linked list
  for (int i = 0; i < 10; i++) {
    insertAtRandomPosition(rand() % 100);
  }

  // Print the linked list
  printLinkedList();

  // Delete some random nodes from the linked list
  deleteAtRandomPosition();
  

  // Print the linked list again
  printLinkedList();

  return 0;
}
