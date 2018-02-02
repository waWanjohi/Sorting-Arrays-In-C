//include the standard input-output library

#include<stdio.h>

 //The main function must be there
int main(void){

    int a[10],i=0,j=0,n,t;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    printf("\n");
            for(i=0;i<n;i++){
              printf("Enter the element%d:",(i+1));
              scanf("%d",&a[i]);
            }
            for(j=0;j<(n-1);j++)
            {
            for(i=0;i<(n-1);i++)
            {
            for(i=0;i<(n-1);i++)
            {if(a[i+1]<a[i])

            {t=a[i];
            a[i+1]=t;}}}

                printf("\n Ascending order: \n");
                for(i-0;i<n;i++){
                printf("%d",a[i]);
            }

                printf("\n Descending order: \n");
                for(i=n;i>0;i--){
                printf("%d",a[i-1]);
            }
             return 0;
       }   
 
 }

