#include "stdio.h"

int main()
{
     int a,b,c;
     scanf("%d %d %d",&a,&b,&c);
     printf("Ans : ");
     if(a+b > a+c && a+b > c+b){
          printf("%d %d",a,b);
     }else if(b+c > a+c && b+c > a+b){
          printf("%d %d",b,c);          
     }else{
          printf("%d %d",a,c);
     }    
     return 0;
}
