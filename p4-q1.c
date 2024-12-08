//Write a C program to implement menu driven calculator to perform Addition, Subtraction, Multiplication or Division as per User’s choice 
#include<stdio.h>
int main ()
{
	int n1,n2,op,m=0;
	printf("Enter the Two number on which the operation is to be performed :");
	scanf("%d%d",&n1,&n2);
	printf("\nEnter 1 to perform addition.");
	printf("\nEnter 2 to perform subtratcion.");
	printf("\nEnter 3 to perform multiplication.");
	printf("\nEnter 4 to perform divison.");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			m=n1+n2;
			break;
		case 2:
			if(n1>n2)
			{
			m=n1-n2;
		    }
		    else
		    {
		    	m=n2-n1;
			}
			break;
		case 3:
			m=n1*n2;
			break;
		case 4:
			if(n2!=0)
			{
			m=n1/n2;
		    }
		    else if(n1!=0)
		    {
		    	m=n2/n1;
			}
	}
	printf("%d",m);
	return 0;
	
}
