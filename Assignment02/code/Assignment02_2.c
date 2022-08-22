#include "stdio.h"

int main()
{
     int a[3];
     int sum = 0; 

     for (int i = 0; i < 3; i++)
     {
          scanf("%d",&a[i]);    
     }

     int min = a[0];
     for (int j = 0; j < 3; j++)
     {
          sum+=a[j];
          if(a[j]<min){
               min = a[j];              
          }
     }
    
     printf("Ans : ");
     for (int k = 0; k < 3; k++)
     {
          if(a[k] > min){
               printf("%d ", a[k]);
          }
     }         
     return 0;
}