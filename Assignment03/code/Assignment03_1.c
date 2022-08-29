#include "stdio.h"

void FindPrimeNum(int num) {
     int p = 0;
     for (int i = 1; i <= num; i++){
          if(num % i == 0){
               p+=1;
          }
     }
     if(p == 2){
          printf("%d is prime", num);
     }else{
          printf("%d is not prime", num);
     }
     
}

int main() {
     int num;
     scanf("%d", &num);
     FindPrimeNum(num);

     return 0;
}
