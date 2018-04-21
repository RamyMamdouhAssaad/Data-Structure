#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std ; 
int const size = 10; //stack size=10 
char thestack[size]  ;//initialization of the stack 
int top= -1 ;
bool isfull()//checking if the stack is full
{
    if(top==size-1) 
    {    return true ;  }
    return false ;
}
bool isempty() //checking if the stack is empty 
{
    if(top==-1) 
    {
        return true ;
    }
    return false ; 
}
int pop() //getting one element outside of the stack 
{
    return thestack[top--] ; 
}

void push (int element ) //putting one element in the stack 

{
    if(!isfull())
    {
        thestack[++top]=element ;
    }
}

	void main()
	{
		string s ; //declaration of a string 
		cout<<"please enter a set of different types of paired symbols "<<endl ;
		cin>>s ;
		for(int i=0 ; i<s.length() ;i++)//checking every charchter in the string //s.length() to stop when the charchters in the string are finished  
		{
			//if the char.=(,{,[ push it to the stack 

			if((s.at(i)=='{')||(s.at(i)=='[')||(s.at(i)=='('))
			{
			push(s.at(i)) ;
			}
			//if the charchter is found=} and the top of the stack containing the opposite sign pop the last one 
			 if((s.at(i)=='}')&&(thestack[top]=='{'))
			{
		    pop() ;
			}
			 //if the charchter is found=) and the top of the stack containing the opposite sign pop the last one 
			 if((s.at(i)==')')&&(thestack[top]=='('))
			{
		    pop() ;
	        }
			 //if the charchter is found=] and the top of the stack containing the opposite sign pop the last one 
			 if((s.at(i)==']')&&(thestack[top]=='['))
			{
		     pop() ;
	        }
			
		}

	if(top==-1)//stack is empty every element is popped which means the equation is balanced 
	{
		cout<<"balanced equation"<<endl ; 
	}
	if(top>-1) //stack contains at least one char which means that the equation is not balanced 
	{
		cout<<"unbalanced equation"<<endl ; 
	}
			
		system("pause") ; // to freeze the system in order for the user to see his answer 
	}




	