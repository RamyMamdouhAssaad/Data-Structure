
#include <iostream>
using namespace std;
#include "Node.h"

class DoublyLinkedList{//class to create the main functions of the doubly linked list
private:
	Node* head;
	Node* tail;
	Node* list;
	int elementCount;

public:
	DoublyLinkedList(){
	
		head = tail = list = NULL;
		elementCount = 0;
	}

	void insert(double item){//creating a new node and inserting in it 
		elementCount++;
		Node* newNode;
		newNode = new Node;
		newNode->data = item;
		list = head;

		if(list == NULL) { 
			head = newNode;
			tail = head;
			return;
		}

		newNode->next = head;
		head->prev = newNode;
		head = newNode;

		
		head->prev = tail;
		tail->next = head;
	}


	int getCount() //to know how many elements are in the list
	{ return elementCount; 
	}
	bool isEmpty()//to check if the list is empty
	{ return elementCount == 0; }
	

	
	void displaypop(){
		if (isEmpty()) {
			cout << "No elements in list" << endl;
			return;
		}
		
		list = head;
		int count = 0;
		cout<<"order in pop method"<<endl ;
		while(list != tail){
			cout << "Element #" << count++ << "\t" << list->data << endl;

			list = list->next;
		}

		cout << "Element #" << count << "\t" << list->data << endl;
	}

	void displaydequeue(){
		if (isEmpty()) {
			cout << "No elements in list";
			return;
		}
		list = tail;
		int count = elementCount - 1;
		cout<<"order in dequque method"<<endl ; 
		
		while(list != head){
			cout << "Element #" << count-- << "\t" << list->data << endl;

		
			list = list->prev;
		}

		
		cout << "Element #" << count << "\t" << list->data << endl;
	}
	
	void displayeven()
	{
		if (isEmpty()) {
			cout << "No elements in list" << endl;
			return;
		}
		list = head;
		int count = 0;
		int counteven=elementCount/2;
		cout<<"order in even method"<<endl ;

		while(counteven+1!=count){
			
			cout << "Element #" << count++ << "\t" << list->data << endl;

			list = list->next;
			list=list->next ; 
		}


	}
	void displayodd()
	{
		if (isEmpty()) {
			cout << "No elements in list" << endl;
			return;
		}
		list = head;
		int count = 0;
		int countodd=elementCount/2;
		cout<<"order in odd method"<<endl ;

		while(countodd!=count){
			list=list->next;
			cout << "Element #" << count++ << "\t" << list->data << endl;

			list = list->next;
		}

	}

};