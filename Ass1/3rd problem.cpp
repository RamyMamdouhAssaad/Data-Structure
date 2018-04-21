#include<iostream>
#include<cstring>
#include<string>
using namespace std  ;
int const size = 20; //size of the stack
char thestack[size]  ;//stack of charachters 
int top= -1 ;
bool isfull()
{
    if(top==size-1) 
    {    return true ; 
    }
    return false ;
}
bool isempty() 
{
    if(top==-1) 
    {
        return false ;
    }
    return true ; 
}
char pop() //removing element from the stack
{

    return thestack[top--] ;
    
}

void push (char element )//putting a charchter in the stack 

{
    if(!isfull())
    {
        thestack[++top]=element ;
    }

}	
void main()
{ 
	string a ; 
	string b="      " ;
	int count=0  ; 
	cout<<"please enter the string needed to be checked "<<endl ; 
	cin>>a ; //taking value of string a
	// and pushing all values of the string in the stack 
	for(int i= 0 ; i<a.length();i++) 
	{
		push(a.at(i)) ; 
	}
	//popping all elements in another string 
	for(int j =0 ; j<a.length();j++) 
	{
		b.at(j)=pop() ; 
	}
	//comparing every element in stack 'a' to every element in stack 'b' 
	for(int k= 0; k<a.length() ;k++) 
	{
		if(a.at(k)==b.at(k))
		{
			count++;//increasing the variable count if the elements in two strings are equal 
		}
		else
		{
			cout<<"not palindrome "<<endl ;//if compiler found two element not equal compiler will dipslay not palindrome and will go outside of the for loop
			break; 
		}
		 
	}
	//if he found all are the same and count equal the same number of elements in string'a' compiler will display palindrome 
	if(a.length()==count)
	{
	cout<<"palindrome "<<endl ;
	}
system("pause") ;
}