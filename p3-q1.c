//Write a C program to check given three sides forms a valid triangle or not? If yes, find whether it is Isosceles, Equilateral or Scalene triangle. 
#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter the value of first side :");
	scanf("%d",&a);
	printf("Enter the value of second side :");
	scanf("%d",&b);
	printf("Enter the value of third side :");
	scanf("%d",&c);
	if ( (a+b>c)&& (a+c>b)&& (b+c>a))
	{
		printf("\nThe entered value makes a triangle. ");
	     if((a==b)&&(b==c))
	{
		printf("\nThe triangle is an equilateral triangle.");
	}
	else if((a==b)||(b==c)||(a==c))
	{
		printf("\n The triangle is an isosceles triangle .");	
	}
	else
	{
		printf("\n The triangle is a scalene triangle.");
	}
	}
	else
	{
		printf("\nThe entered value doesn't makes a triangle. ");
	}
	
	return 0;
}
