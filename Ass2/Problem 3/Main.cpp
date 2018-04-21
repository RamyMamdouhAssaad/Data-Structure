#include<iostream>
using namespace std ; 
int fibonacci (int n) //fibonacci function
{
	if (n==0) //if number inserted added by user 0 retrieve 0 
		return 0 ;
	else if (n==1) //if number inserted added by user 1 retrieve 1 
		return 1 ; 
	else //any other numbers add the last two numbers 
		return (fibonacci(n-1)+fibonacci(n-2));
}
void main()
{
	int num ; 
	cout<<"please enter a number to show the fibonacci of this number "<<endl ;
    cin>>num ;
		for(int i = 1 ; i<num+1 ; i++) //to get all the fibonacci number till the number address
		{
			cout<<"the fibonanci of number "<<i<<" = "<<fibonacci(i)<<endl ; 

		}

		system("pause") ; 

}