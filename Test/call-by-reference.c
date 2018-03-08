/*
 *Copyright 2018
 *Written by @waWanjohi
 */

#include<stdio.h>
void swapnumber(int*var1,int*var2)
{
	int tempnum;
	tempnum= *var1;
	*var1= *var2;
	*var2= tempnum;
}
int main()
{
	int num1=35,num2=45;
	printf("Before swapping:");
	printf("\n num1 value is: %d",num1);
	printf("\n num2 value is: %d",num2);
	  swapnumber(&num1,&num2);
	printf("\n After swapping: ");
	printf("\n number1 value is: %d",num1);
	printf("\n num2 value is: %d",num2);
	return 0;
}
