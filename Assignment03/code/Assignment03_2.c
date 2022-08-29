#include "stdio.h"

void FindPrimeNum(int num) {
     int m = 0, f = 0; 
     m = num/2;

     
     for(int i=2;i<=m;i++){             

          if(num % i == 0){    
               printf("%d is not prime", num);    
               f = 1;    
               break;    
          }    
     }    
     if(num == 1 || num == 0){
           printf("%d is not prime", num);
     }else if(f == 0)    
          printf("%d is prime", num);       
}

int main() {
     int num;
     scanf("%d", &num);
     FindPrimeNum(num);

     return 0;
}