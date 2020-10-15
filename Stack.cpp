#include<iostream>

//NODE CLASS
template <class t>
class StackNode
{
public:

	t info;
	StackNode *next;

	StackNode( int data )
	{
		info = data;
		next = NULL;
	}
};

//STACK CLASS
template <class T>
class Stack
{    
    StackNode <T> *top;                    // pointer to the top node

    public :
    Stack() { top = NULL; }
    
    bool isEmpty()              //to check if the stack is empty
    {
		return ( top == NULL )? true : false ;
    }

    void push( T element )      //to push an element in the stack
    {
		if( top == NULL )
		{
			top = new StackNode<T>(element);
			return;
		}

		else
		{
			StackNode <T> *p = new StackNode<T>(element);
			p->next = top;
			top = p;
		}		
	}//push()

    T pop()                  //to pop an element from the stack
    {
		if( top == NULL )
		{
			return NULL;
		}

		else
		{
			T node_info = top->info;
			StackNode <T> *p = top;
			top = top->next;
			delete(p);
			return node_info;		
		}		
    }//pop()
	
	void printStack(){		//to print the stack
		StackNode <T> *p = top;
		while(p!=NULL){
			cout << p->info << " ";
			p = p->next;
		}
	}//printStack()
};//End of Stack class
