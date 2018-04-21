# include <iostream> 
using namespace std;

class Node{//containg the main function of the doubly linked list 
public:
	double data;
	Node* prev;
	Node* next;
	
	Node()
	{
		next = NULL; 
		prev = NULL;
		data = 0; 
	}

};