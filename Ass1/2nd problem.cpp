#include<iostream>
#include<string>
using namespace std  ;
int const size = 5; //size of the stack= 5 
int thestack[size]  ;//initialization of the stack 
int top= -1 ;
bool isfull() //checking if the stack is full
{
    if(top==size-1) 
    {    return true ; 
    }
    return false ;
}
bool isempty() //checking if the stack is empty  
{
    if(top==-1) 
    {
        return false ;
    }
    return true ; 
}
int pop() //removing one element from the stack
{

    return thestack[top--] ;
    
}

void push (int element )//putting one element in the stack 

{
    if(!isfull())
    {
        thestack[++top]=element ;
    }

}	
void main()
{ 
	int x,y ;
	char c ;
	cout<<"enter 2 digits please "<<endl ; 
    cin>>x; 
    cin>>y ; 
	push(x) ; //putting x in the stack
	push(y) ; //putting y in the stack 
	cout<<"what is your action on these two numbers(if plus(+) is selected numbers will be added/if comma(,)is selected the last entry will cancel the last entry/if dot(.) is selected all entries will be canceled )"<<endl ; //asking the user what action he wants to do 
	cin>>c ; 
	if(c=='+')//if user enters + the two elements will be added 
	{
		
		cout<<"The sum of the numbers= "<<pop()+pop()<<endl ; 
		cout<<"thank you for using the program"<<endl ;
	}
	// if the user enters , the last element will be deleted
	if(c==',')
	{
		int c,d,t; 
		char q,P,O ; 
		pop() ;
		/*line b */  cout<<"the last entry was deleted do you want to delete the first element too(y/n) ?"<<endl ; //asking the user if he wants to delete the first element too 
		cin>>q ; 
		if(q=='y') //if user answers 'y' the two elements will be removed and the user is asked to enter two new element
		{pop();
		cout<<"please enter the new two elements "<<endl ; 
		cin>>c ; push(c);
		cin>>d; push(d) ;
		cout<<"if want to add them press plus(+)?y/n  "<<endl ;//if the user wants to add the two new numbers 
		cin>>P ;
		if(P=='y')//if the user answers 'y' the sum will be shown
		{
		cout<<"the sum of the new numbers = "<<pop()+pop() ;
		}
		if(P=='n') //if the users answers 'n' the two numbers will be shown 
		{
			cout<<"The two new numbers equal to "<<pop()<<"/t"<<pop() <<endl ; 
		}
		
		}
		if(q=='n')  //if the user after the question in line b entered no he will be asked to enter a new element and if he wants to add them 
		{cout<<"enter the new element "<<endl ; 
		cin>>t; 
			push(t);
			cout<<"if want to add them press plus(+)?y/n "<<endl ;//asking the user if he wants to add them 
		cin>>O ;
		if(O=='y')
		{
		cout<<"the sum of the new number and the old one = "<<pop()+pop()<<endl ;
		}
		if(O=='n')//if answer = n the program will display thank you  for using program 
		{
			cout<<"thank you for using the program"<<endl ;
		}
		}
	}

	
		if(c=='.')// and finally if the comma is written the stack will be empty 
		{
			int b,n,C ;
			char g,M ; 
			pop() ; //removing an element from the stack 
			pop() ; //removing an element from the stack 
			cout<<"now elements are removed do you want to enter two new numbers ?(y/n)"<<endl ;//asking the user if he wants to enter to new elements to the stack 
			cin>>g; 
			/*line c */   if(g=='y') //if the answer = 'y' the user will be asked to enter two numbers and they will be pushed into the stack 
			{
			cout<<"please enter the new two elements "<<endl ; 
		    cin>>b ; push(b);
		    cin>>n; push(n) ;
		    cout<<"if want to add them press plus(+)?y/n  "<<endl ;//the user is asked if he wants to add the two new elements
			cin>>M;

		if(M=='y')
		{
		cout<<"the sum of the new numbers = "<<pop()+pop()<<endl ;
		}
			
		else
			cout<<"thank you for using the program "<<endl;
			}
			if(g=='n')// related to line c if the user from the first entered 'n' he will display only a message 
			{
				cout<<"thank you for using the program"<<endl ;
			}

		}
		 
			
			
	
		
	system("pause") ; 
}
