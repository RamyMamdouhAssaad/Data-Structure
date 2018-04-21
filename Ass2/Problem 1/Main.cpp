
#include <iostream>
using namespace std;
#include "DoublyLinkedList.h"

void main(){

	DoublyLinkedList dls;

	

	dls.insert(1.5);//inserting in the doubly linked list
	dls.insert(3.5);
	dls.insert(10);
	dls.insert(0.5);
	dls.insert(50);
	dls.insert(60);
	dls.insert(2.5);
	dls.displaypop() ;//displaying the pop method
	dls.displaydequeue() ; //displaying in the dequeue method
	dls.displayeven()  ; //displaying in the even method
	dls.displayodd() ; //displaying in the odd method
	system("pause") ;

	
}