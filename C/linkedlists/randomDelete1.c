#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
  int data;
  struct Node *next;
};

// Function to insert a new node at a given position
void insertAtPosition(struct Node **head, int data, int position) {
  // Create a new node
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  // Check if the list is empty or position is 1
  if (*head == NULL || position == 1) {
    newNode->next = *head;
    *head = newNode;
    return;
  }

  // Find the node before the given position
  struct Node *prev = *head;
  for (int i = 2; i < position; i++) {
    prev = prev->next;
    if (prev == NULL) {
      printf("Invalid position\n");
      return;
    }
  }

  // Insert the new node after the previous node
  newNode->next = prev->next;
  prev->next = newNode;
}

// Function to delete a node at a given position
void deleteAtPosition(struct Node **head, int position) {
  // Check if the list is empty
  if (*head == NULL) {
    printf("List is empty\n");
    return;
  }

  // Check if position is 1
  if (position == 1) {
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
    return;
  }

  // Find the node before the given position
  struct Node *prev = *head;
  for (int i = 2; i < position; i++) {
    prev = prev->next;
    if (prev == NULL) {
      printf("Invalid position\n");
      return;
    }
  }

  // Delete the node after the previous node
  struct Node *temp = prev->next;
  prev->next = temp->next;
  free(temp);
}

// Function to print the linked list
void printList(struct Node *head) {
  while (head != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}

int main() {
  // Create an empty list
  struct Node *head = NULL;

  // Insert some nodes
  insertAtPosition(&head, 10, 1);
  insertAtPosition(&head, 20, 2);
  insertAtPosition(&head, 30, 1);

  // Print the list
  printList(head);

  // Delete a node
  deleteAtPosition(&head, 1);

  // Print the list
  printList(head);

  return 0;
}
