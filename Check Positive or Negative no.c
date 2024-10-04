#include<stdio.h>
int main()
{
	int num;
	printf("Enter the numbers");
	scanf("%d",&num);
	if(num >=0)
	{
		printf("%d  is a positive number",num);
	}
	else
	{	
		printf("%d  is negative number",num);
	}
	return 0;
}

