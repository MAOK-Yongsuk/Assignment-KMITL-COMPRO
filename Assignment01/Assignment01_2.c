#include "stdio.h"

int main(){
     int num,i=1,j=1,k=1,l=1;
     printf("Enter number : ");
     scanf("%d",&num);

     while (i<=num)
     {
          printf("*");
          i+=1;
     }
     printf("\n");

     while (j<=(num-2))
     {
          while(k<=num)
          {
               if(k == 1 || k == num){
                    printf("*");
               }else{
                    printf(" ");
               } 
               k +=1;
          }
          j +=1;
          k = 1;
          printf("\n");
     }

     while (l<=num)
     {
          printf("*");
          l+=1;
     }
     return 0;

}