#include<iostream>
using namespace std;
	
// C# program to delete every k-th Node
// of a singly linked list.
using System;
	
class GFG
{

/* Linked list Node */
public class Node
{
	public int data;
	public Node next;
}

// To remove complete list (Needed for
// case when k is 1)
static Node freeList(Node node)
{
	while (node != null)
	{
		Node next = node.next;
		node = next;
	}
	return node;
}

// Deletes every k-th node and
// returns head of modified list.
static Node deleteKthNode(Node head, int k)
{
	// If linked list is empty
	if (head == null)
		return null;

	if (k == 1)
	{
		head = freeList(head);
		return null;
	}

	// Initialize ptr and prev before
	// starting traversal.
	Node ptr = head, prev = null;

	// Traverse list and delete
	// every k-th node
	int count = 0;
	while (ptr != null)
	{
		// increment Node count
		count++;

		// check if count is equal to k
		// if yes, then delete current Node
		if (k == count)
		{
			// put the next of current Node in
			// the next of previous Node
			prev.next = ptr.next;

			// set count = 0 to reach further
			// k-th Node
			count = 0;
		}

		// update prev if count is not 0
		if (count != 0)
			prev = ptr;

		ptr = prev.next;
	}
	return head;
}

/* Function to print linked list */
static void displayList(Node head)
{
	Node temp = head;
	while (temp != null)
	{
		Console.Write(temp.data + " ");
		temp = temp.next;
	}
}

// Utility function to create a new node.
static Node newNode(int x)
{
	Node temp = new Node();
	temp.data = x;
	temp.next = null;
	return temp;
}

// Driver Code
public static void Main(String []args)
{
	/* Start with the empty list */
	Node head = newNode(1);
	head.next = newNode(2);
	head.next.next = newNode(3);
	head.next.next.next = newNode(4);
	head.next.next.next.next = newNode(5);
	head.next.next.next.next.next = newNode(6);
	head.next.next.next.next.next.next = newNode(7);
	head.next.next.next.next.next.next.next = newNode(8);

	int k = 3;
	head = deleteKthNode(head, k);

	displayList(head);
}
}

