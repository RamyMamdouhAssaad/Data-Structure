#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std ; 
int const size = 10; //size of the stack 
char thestack[size]  ;
int top= -1 ;
bool isfull()
{
    if(top==size-1) 
    {    return true ;  }
    return false ;
}
bool isempty() 
{
    if(top==-1) 
    {
        return true ;
    }
    return false ; 
}
int pop() //removing an element from a stack 
{
    return thestack[top--] ; 
}

void push (int element ) //putting a new element in the stack 

{
    if(!isfull())
    {
        thestack[++top]=element ;
    }
}
void main() 
{ 
	int dec ; 
	int i = 0 ;
    cout<<"please enter a number to be changed into binary code"<<endl ; 
	cin>>dec ; //user entering a number to be checked 
	while(dec>0) //while the number is bigger than 0 continue doing the calculations
	{
		if((dec%2)==0)//when the number entered %2=0 then put 0 into the stack 
		{
			push(0) ; 
		}
		else  //anything else put 1 
			push(1) ;
		dec=dec/2 ;//at the end of the loop divide decimal number by 2 
		i++; //to know how many time the loop is being executed 
	}
	cout<<"the order in binary number = "  ;
	for(int j =0 ; j<i ; j++)
	{
		cout<<pop(); //removing every element from the stack to show the answer 
	}
	
	system("pause") ;

	
}