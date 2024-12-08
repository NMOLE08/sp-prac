//The Collatz conjecture states that any positive integer will eventually 
//converge to 1 if you repeatedly apply the following rules:  
//• If the number is even, divide it by 2  
//• If the number is odd, multiply it by 3 and add 1  
//Write a C program to accept one positive integer from user and 
//process it using above stated rule till it converges to 1. Display all 
//intermediate results. 
#include<stdio.h>
int main ()
{
	int n;
	printf("Enter the positive number: ");
	scanf("%d",&n);
     while(n!=1)
     {
     	if (n%2==0)
     	{
			n=n/2;
			printf("\nThe process is :%d",n);
		}
	    else
		{
			n=(n*3)+1;
			printf("\nThe process is :%d",n);
		}
	 }
	return 0;
}
