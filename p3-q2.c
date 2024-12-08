//Write a C program to find largest and second largest for set of 
//n integers 
#include<stdio.h>
int main ()
{
	int n,a[10],b[10],i,j,t=0;
	printf("Enter the number of terms ");
	scanf("%d",&n);
	for(i=0 ;i<=n-1;i++)
	{
		printf("Enter the value of the %d index :",i);
		scanf("%d",&a[i]);
	}
	for(j=1 ; j<=n ; j++)
	{
		for(i=0 ;i<=n-1;i++)
		{
			if(a[i+1]>a[i])
	    	{	t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
	        }
			
		}
		
	}
	printf("The Highest integer of the set is: %d",a[0]);
	printf("\nThe second  Highest integer of the set is: %d",a[1]);
	return 0;
}
