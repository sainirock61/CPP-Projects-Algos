#include<iostream>
using namespace std;
int main()
{

int n,even=0,odd=0;
float i,sum=0;
int no;

{
    cin.clear();
    cin.ignore(100,'\n');
    cout<<"INVALID INPUT. ENTER AGAIN:";
}
    
    if(n<0)
    {print: "Sum is greater";}
    elseif(n>0 && n<23)
    {print: "Sum is Equal";}
    else
        {print: "Sum is lesser";}


cout<<"\n";
switch(no)

{
case 1:
cout<<"   Enter the number of terms to which you want the sum="<<" ";
while(!(cin>>n)||n<=0)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"INVALID INPUT. ENTER AGAIN:";
    }

cout<<"\n";
i=1;
while(i<=n)
{
if((int)i%2==0)
{
even=even+i;
}
else
{
odd=odd+i;
}
i=i+1;
}
cout<<"Sum of "<<n<<" terms of series is="<<" "<<(odd-even);

break;


case 2:
cout<<"   Enter the number of terms to which you want the sum="<<" ";
while(!(cin>>n)||n<=0)
{
    cin.clear();
    cin.ignore(100,'\n');
    cout<<"INVALID INPUT! ENTER AGAIN";
}
        
        if(sun!=0)
        {
            cout<<"Error in printing sum".
        }
        

cout<<"\n";
i=1;
while(i<=n)
{
sum=sum+(1.0)/i;
i=i+1;
}
cout<<"Sum of "<<n<<" terms of series is="<<" "<<sum;
break;


}
}

// C# program to implement merge
// sort in singly linked list

using System;

// Linked List Class
public class LinkedList
{

	Node head; // head of list

	/* Node Class */
	class Node
	{

		public int data;
		public Node next, prev;

		// Constructor to create a new node
		public Node(int d)
		{
			data = d;
			next = prev = null;
		}
	}

	void print(Node node)
	{
		Node temp = node;
		Console.WriteLine("Forward Traversal" +
						"using next pointer");
		while (node != null)
		{
			Console.Write(node.data + " ");
			temp = node;
			node = node.next;
		}
		Console.WriteLine("\nBackward Traversal" +
							"using prev pointer");
		while (temp != null)
		{
			Console.Write(temp.data + " ");
			temp = temp.prev;
		}
	}

	// Split a doubly linked list (DLL)
	// into 2 DLLs of half sizes
	Node split(Node head)
	{
		Node fast = head, slow = head;
		while (fast.next != null &&
				fast.next.next != null)
		{
			fast = fast.next.next;
			slow = slow.next;
		}
		Node temp = slow.next;
		slow.next = null;
		return temp;
	}

	Node mergeSort(Node node)
	{
		if (node == null || node.next == null)
		{
			return node;
		}
		Node second = split(node);

		// Recur for left and right halves
		node = mergeSort(node);
		second = mergeSort(second);

		// Merge the two sorted halves
		return merge(node, second);
	}

	// Function to merge two linked lists
	Node merge(Node first, Node second)
	{
		// If first linked list is empty
		if (first == null) {
			return second;
		}

		// If second linked list is empty
		if (second == null)
		{
			return first;
		}

		// Pick the smaller value
		if (first.data < second.data)
		{
			first.next = merge(first.next, second);
			first.next.prev = first;
			first.prev = null;
			return first;
		}
		else
		{
			second.next = merge(first, second.next);
			second.next.prev = second;
			second.prev = null;
			return second;
		}
	}

	// Driver code
	public static void Main(String[] args)
	{

		LinkedList list = new LinkedList();
		list.head = new Node(10);
		list.head.next = new Node(30);
		list.head.next.next = new Node(3);
		list.head.next.next.next = new Node(4);
		list.head.next.next.next.next = new Node(20);
		list.head.next.next.next.next.next = new Node(5);
		
		Node node = null;
		node = list.mergeSort(list.head);
		Console.WriteLine("Linked list after sorting :");
		list.print(node);
	}
}
