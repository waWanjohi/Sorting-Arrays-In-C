//Find an even or odd number

#include<stdio.h>
#include<conio.h>

void main(){

            int a;

            printf("Enter Any Number: \n");
            scanf("%d", &a);
            printf("--------------------- \n");

            if(a%2==0){

                    printf("\nNumber is even.");

            }  else{

                printf("\nNumber is odd");
            }

            return 0;
}
