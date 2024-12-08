//Write a C program to calculate Mean, Variance and Standard Deviation for a set of n integers 
#include<stdio.h>
int main ()
{
	int i,n,a[10],sum=0;
	float mean=0 ,var=0,vn=0,std=0;
	printf("Enter the number of integers: ");
	scanf("%d",&n);
	for (i=0 ; i<=n-1 ;i++)
	{
		printf("\nEnter the value of integer in %d index: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0 ; i<=n-1 ;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/n;
	for (i=0 ; i<=n-1 ;i++)
	{
		vn=pow((a[i]-mean),2)+vn;
	}
	var=vn/n;
	std=sqrt(var);
	printf("\nThe value of mean is :%f",mean);
	printf("\nThe value of varience is :%f",var);
	printf("\nThe value of standard deviation is :%f",std);
		return 0;
}
