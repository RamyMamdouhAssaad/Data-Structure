#include <iostream>
using namespace std;
class node //used for binary search tree
{
	public:
		int data;
		node* left;
		node* right;
		node() 
		{
	data = -1;
	left = NULL;
	right = NULL;
		}

};


struct Node //used for doubly linked list
{
	int data;
	Node * next,*prev;
    
};
 
void display (Node *head); //displaying the order of the doubly linked list
void addLast (Node *head, int data);//inserting into the list
void display (Node *head);
Node *sortinglist( Node **head) ; //ordering the list in asec. method
void insertintobinarysearchtree(int value); //inserting into the binary search tree(made to take value from doubly linked list)
void insertintobts(int value, node* root); //inserting into the binary search tree and to sort them out
void displaybts(); //a conversion method to display in display node function
node * root ; //root of the tree from class node
void   displaynode(node* root) ; //display the order of the tree including parents and sons
int main()
{
	Node *list1 = new Node();
	Node *list2 = new Node();
 
	list1 -> data = 5;
	list1 -> next = NULL;
 
	list2 -> data = 3;
	list2 -> next = NULL;
 
	addLast(list1, 4);
	addLast(list1, 9);
	addLast(list1, 3);
	addLast(list1, 6);
	addLast(list1, 1);
	addLast(list1, 12);

 
	cout << "List 1 before converting " << endl;
	display (list1);
	cout<<"Binary tree : "<<endl ; 
	displaybts()  ;

 
	
	
	
	system("pause") ;
 
	
	
}
 
void addLast (Node *head, int data)
{
	
	insertintobinarysearchtree(data) ;
	Node *temp = head;
	Node *newHead = new Node();
	newHead -> data = data;


	while(temp)
	{
		if(temp -> next == NULL)
		{
			temp -> next = newHead;
			newHead -> next = NULL;
			return;
		}
		temp = temp -> next;
 
	}
 
}
void insertintobinarysearchtree(int value)
{
	if(root == NULL)
	{
		root = new node();
		root->data = value;
	
	}		
	else
	{
		insertintobts(value, root);
	}
}

void insertintobts(int value, node* root)
{

	if(value < root->data)
	{
		if(root->left == NULL)
		{
			root->left = new node();
		
			root->left->data = value;
			
		}
		else
		{
			insertintobts(value, root->left);
		}  
	}
	else if(value >= root->data)
	{
		if(root->right == NULL)
		{
			root->right = new node();
			
			root->right->data = value;
			
		}
		else
		{
			insertintobts(value, root->right);
		}
	}
}

void displaybts()
{
	displaynode(root);
}
void   displaynode(node* root)
{
	if(root == NULL)
		return;
	
	cout << root->data << " : ";
	
	if(root->left != NULL)
		cout << root->left->data;
	else
		cout << " - ";
	
	cout << " , ";
	
	if(root->right != NULL)
		cout << root->right->data;
	else
		cout << " - ";
	
	cout << endl;

	displaynode(root->left);
	displaynode(root->right);
}

 
void display (Node *head)
{
	Node *temp = head;
 
	while(temp)
	{
		if ( temp -> next == NULL)
		{
			cout << temp -> data;
		}
		else
		cout << temp -> data << ",";
		temp = temp -> next;
	}
 
	cout << endl;
	cout << endl;
}
Node *sortinglist( Node **head)

{	
	Node *temp1 = *head;
	Node *temp = new Node();
 
 
	int count = 0;
	temp = temp1 -> next;
 
	do{
		count = 0;
	while(temp1 -> next != NULL)
	{
		if (temp1 -> data > temp ->data )
		{
			temp -> data = temp1 -> data + temp -> data;
			temp1 -> data = temp -> data - temp1 -> data;
			temp -> data = temp -> data - temp1 -> data;
			temp1 = temp1 -> next;
 
			if (temp1 -> next != NULL)
			{
				temp = temp1 -> next;
 
			}
			count = 1;
		}
		else 
		{
 
			if (temp1 -> next != NULL)
				temp1 = temp1 -> next;
			if (temp1 -> next != NULL)
				temp = temp1 -> next;
		}
	}
 
	if(temp == temp1)
	{
		temp1 = *head;
		temp = temp1 -> next;
	}
 
 
 
	} while (count == 1);
 
 
	return *head;
 
}
 