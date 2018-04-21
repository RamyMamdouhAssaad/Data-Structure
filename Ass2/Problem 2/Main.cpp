#include <iostream>
using namespace std;
struct Node //node for the linked list
{
	int data;
	Node * next;
};

void addFirst (Node **head, int data); //add in the front of the list
void display (Node *head); //display the order of the list
void addLast (Node *head, int data); //add at the end of the list 
void display (Node *head);
Node *sortList ( Node **head);//arranging the list
Node *intersection( Node* listOne, Node* listTwo); //intersection between two lists
Node *Union(Node* listone,Node* listTwo); //union of two lists
bool isPresent (Node *head, int data) ; //to see if the element is already in the list or not

 
int main()
{
	Node *list1 = new Node(); //creating a list
	Node *list2 = new Node();
	Node *intersectionList  = new Node(); //creating an intersection list
	Node *UnionList =new Node()  ; //creating a union list

	list1 -> data = 5;
	list1 -> next = NULL;
 
	list2 -> data = 3;
	list2 -> next = NULL;
 
	addLast(list1, 4);//adding in list one 
	addLast(list1, 9);
	addLast(list1, 3);
	addLast(list1, 6);
	addLast(list1, 1);
	addLast(list1, 12);
 
 
	addLast(list2, 4);
	addLast(list2, 5);
	addLast(list2, 9);
	addLast(list2, 7);
	addLast(list2, 2);
	addLast(list2, 1);
	addLast(list2, 12);
	addLast(list2, 10);
 
	cout << "List 1 before Sorting: " << endl;
	display (list1); //displaying list one 
 
	cout << "List 2 before Sorting: " << endl;
	display (list2);

 sortList(&list1);
	cout << "List 1 After Sorting: " << endl;
	display (list1);
	sortList(&list2);
	cout << "List 2 After Sorting: " << endl;
	display (list2);

	
	intersectionList = intersection(  list1, list2);
	UnionList=Union(list1,list2) ;
	cout << "Intersection List: " << endl;
	display (intersectionList);
	cout<<"Union List "<<endl ; 
	display(UnionList) ;
    system("pause");
}
 
void addFirst (Node **head, int data)
{
 
	Node *newHead = new Node();
 
	newHead -> data = data;
	newHead -> next = *head;
	*head = newHead;
 
}
void addLast (Node *head, int data)
{
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

Node *sortList (Node **head)
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
 
Node *intersection( Node* listOne, Node* listTwo)
{
	Node *inter1 = listOne;
	Node *inter2 = listTwo;
	Node *temp = new Node();
	int pos = 0;
 
	while(inter1 || inter2)
	{
		if( inter1 -> data > inter2 ->data )
			if(inter2 -> next == NULL)
				return temp;
			else
				inter2 = inter2 -> next; 
 
		if( inter1 -> data < inter2 ->data )
			if(inter1 -> next == NULL)
				return temp;
			else
				inter1 = inter1 -> next; 
 
		if( inter1 -> data == inter2 ->data )
		{
			if(pos == 0)
			{
				temp -> data = inter2 -> data;
				pos++;
			}
			else
			addFirst(&temp, inter2 -> data); 
			inter2 = inter2 -> next; 
			inter1 = inter1 -> next; 
 
		}
	}
	return temp;
}
bool isPresent (Node *head, int data) //to see if the element is already in the list or not
{
    Node *t = head;
    while (t != NULL)
    {
        if (t->data == data)
            return 1;
        t = t->next;
    }
    return 0;
}
Node *Union(Node* listone,Node* listTwo)
{
	Node *Union1=listone ;
	Node *Union2=listTwo ; 
	Node *temp =new Node() ;
	  while (Union1 != NULL)
    {
        addFirst(&temp, Union1->data);
        Union1 = Union1->next;
    }
    while (Union2 != NULL)
    {
        if (!isPresent(temp, Union2->data))
            addFirst(&temp, Union2->data);
        Union2 = Union2->next;
    }
 
    return temp;
}
