#include<stdio.h>

int main() 
{
	
	int marks;

	printf("\nENTER THE MARKS: ");
	scanf("%d",&marks);
	
	if(marks>=85 && marks<=100)
	{
		printf("\nGRADE A");
	}
	else if(marks>=70 && marks<=84)
	{
		printf("\nGRADE B");
	}
	else if(marks>=55 && marks<=69)
	{
	   	printf("\nGRADE C");	
	}
	else if(marks>=40 && marks<=54)
	{
	   	printf("\nGRADE D");	
	}
	else
	{
		printf("\nGRADE F");
	}
	  
	return 0;
}  
