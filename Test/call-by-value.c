#include <stdio.h>

void swapnum( int var1, int var2)
{

    int tempnum;
    tempnum=var1;
    	var1= var2;
    	var2 = tempnum;

}
int main()
{
    int num1 = 35, num2 = 45;
    printf("Before swapping: %d, %d", num1, num2);
    	swapnum(num1,num2);
    printf("\nAfter swapping: %d, %d", num1,num2);
}
