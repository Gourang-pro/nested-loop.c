#include<stdio.h>
#include<conio.h>


int main()
{
    int n,i,j;
printf("enter the number :");
scanf("%d",&n);



for(i=1;i<=n;i++)//for the use of row 
        {
             
           for(j=1;j<=i;j++)//for the use of columns
            { 
                printf("*  ");


            }
               printf("\n");
                
         }
          printf("\n");
return 0;

}