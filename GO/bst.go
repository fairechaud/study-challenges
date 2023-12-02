package main

import (
	"fmt"
)

// Node structure representing each element in the BST
type Node struct {
	Key   int
	Left  *Node
	Right *Node
}

// BST structure with a pointer to the root node
type BST struct {
	Root *Node
}

// Insert a new Node in the BST
func (bst *BST) Insert(key int) {
	bst.Root = insertRec(bst.Root, key)
}

func insertRec(root *Node, key int) *Node {
	if root == nil {
		return &Node{Key: key}
	}
	if key < root.Key {
		root.Left = insertRec(root.Left, key)
	} else {
		root.Right = insertRec(root.Right, key)
	}
	return root
}

// Contains checks if a value is present in the BST
func (bst *BST) Contains(key int) bool {
	return containsRec(bst.Root, key)
}

func containsRec(root *Node, key int) bool {
	if root == nil {
		return false
	}
	if key == root.Key {
		return true
	}
	if key < root.Key {
		return containsRec(root.Left, key)
	}
	return containsRec(root.Right, key)
}

// Delete a Node in the BST
func (bst *BST) Delete(key int) {
	bst.Root = deleteRec(bst.Root, key)
}

func deleteRec(root *Node, key int) *Node {
	if root == nil {
		return root
	}
	if key < root.Key {
		root.Left = deleteRec(root.Left, key)
	} else if key > root.Key {
		root.Right = deleteRec(root.Right, key)
	} else {
		// Node with only one child or no child
		if root.Left == nil {
			return root.Right
		} else if root.Right == nil {
			return root.Left
		}

		// Node with two children, get the inorder successor (smallest in the right subtree)
		root.Key = minValue(root.Right)
		root.Right = deleteRec(root.Right, root.Key)
	}
	return root
}

func minValue(node *Node) int {
	currentNode := node
	for currentNode.Left != nil {
		currentNode = currentNode.Left
	}
	return currentNode.Key
}

func main() {
	bst := &BST{}
	values := []int{50, 30, 70, 20, 40, 60, 80}
	for _, v := range values {
		bst.Insert(v)
	}

	fmt.Println(bst.Contains(25)) // Output: false
	bst.Delete(70)
	fmt.Println(bst.Contains(70)) // Output: false
}
