#include<iostream>
using namespace std;

int main()
{
    cout<<"       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"                                     LINEAR      SEARCH                             \n";
    cout<<"       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"Extereme";
	int n,i,num[500],a,flag,m;

		cout<<"Enter the number of terms of array :--";


	while(!(cin>>n)|| (n<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"INVALID INPUT. ENTER AGAIN:";
        }

	cout<<"Enter the terms of Array : "<<endl;

		for(i=0;i<n;i++)
		   {
		       cin>>num[i];
		   }

    name:

    cout<<"Enter the element you want to search :- ";
    while(!(cin>>a)|| (a<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"INVALID INPUT. ENTER AGAIN:";
        }


    for(int j=0;j<n;j++)
    {
        if(num[j]==a)
        {
           flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }

    }
        if(flag==1)
        {

          cout<<"                   _______________________________________________________________________           \n";
          cout<<"                  |                                                                       |          \n";
          cout<<"                  |                      !!!!!!  MATCH FOUND !!!!!                        |          \n";
          cout<<"                  |_______________________________________________________________________|          \n";
        }

        else
        {
                cout<<"            ________________________________________________________________________            \n";
                cout<<"           |                                                                        |           \n";
                cout<<"           |                     !!!!!!       NO MATCH FOUND   !!!!!!               |           \n";
                cout<<"           |________________________________________________________________________|         \n\n";

        }

hello:
        cout<<"             WANT TO SEARCH MORE(select 1 or 2 ):-        \n";
hello1:

        cout<<"                   1. YES            2.NO      \n";

       while(!(cin>>m)|| (m<0))
        {
            cin.clear();
	    cin.ignore(100,'\n');
	    cout<<"INVALID INPUT. ENTER AGAIN:";
        }
;

        if(m==1)
        {
            goto name;
        }
        else if(m==2)
        {
                cout<<"            ________________________________________________________________________            \n";
                cout<<"           |                                                                        |           \n";
                cout<<"           |                               Thanks                                   |           \n";
                cout<<"           |                       Press any key to Continue  !!                    |           \n";
                cout<<"           |________________________________________________________________________|         \n\n";

        }
        else
        {
            cout<<"      !!!   INVALID INPUT   !!!   \n";
            cout<<"Please choose { 1 for YES }  and {  2 for NO  } :-- ";
            goto hello1;

        }


}


// C# program to reverse a linked list
// in groups of given size
using System;

public class LinkedList {
	Node head; // head of list

	/* Linked list Node*/
	class Node {
		public int data;
		public Node next;
		public Node(int d)
		{
			data = d;
			next = null;
		}
	}

	Node reverse(Node head, int k)
	{
		if(head == null)
		return null;
		Node current = head;
		Node next = null;
		Node prev = null;

		int count = 0;

		/* Reverse first k nodes of linked list */
		while (count < k && current != null) {
			next = current.next;
			current.next = prev;
			prev = current;
			current = next;
			count++;
		}

		/* next is now a pointer to (k+1)th node
			Recursively call for the list starting from
		current. And make rest of the list as next of
		first node */
		if (next != null)
			head.next = reverse(next, k);

		// prev is now head of input list
		return prev;
	}

	/* Utility functions */

	/* Inserts a new Node at front of the list. */
	public void push(int new_data)
	{
		/* 1 & 2: Allocate the Node &
				Put in the data*/
		Node new_node = new Node(new_data);

		/* 3. Make next of new Node as head */
		new_node.next = head;

		/* 4. Move the head to point to new Node */
		head = new_node;
	}

	/* Function to print linked list */
	void printList()
	{
		Node temp = head;
		while (temp != null) {
			Console.Write(temp.data + " ");
			temp = temp.next;
		}
		Console.WriteLine();
	}

	/* Driver code*/
	public static void Main(String[] args)
	{
		LinkedList llist = new LinkedList();

		/* Constructed Linked List is 1->2->3->4->5->6->
		7->8->8->9->null */
		llist.push(9);
		llist.push(8);
		llist.push(7);
		llist.push(6);
		llist.push(5);
		llist.push(4);
		llist.push(3);
		llist.push(2);
		llist.push(1);

		Console.WriteLine("Given Linked List");
		llist.printList();

		llist.head = llist.reverse(llist.head, 3);

		Console.WriteLine("Reversed list");
		llist.printList();
	}
}
