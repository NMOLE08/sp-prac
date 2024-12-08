//Write a C program to accept x, y coordinates of one point and display the quadrant (I, II, III & IV) in which it present  
#include<stdio.h>
int main ()
{
	int x,y;
	printf("Enter the value of X and Y respective :");
	scanf("%d%d",&x,&y);
	if((x>0)&&(y>0))
	{
		printf("\nThe point is from the 1st quadrant.");
	}
	else if((x<0)&&(y>0))
	{
		printf("\nThe point is from the 2nd quadrant.");
		
	}
	else if ((x<0)&&(y<0))
	{
		printf("\nThe point is from the 3rd quadrant.");
	}
	else
	{
		printf("\nThe point is from the 4st quadrant.");
	}
	return 0;
}
