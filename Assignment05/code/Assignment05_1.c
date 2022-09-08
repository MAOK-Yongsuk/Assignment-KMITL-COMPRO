#include "stdio.h"

void Factorial(int num){
     int result = 1;
     for (int i = 1; i <= num; i++){
          result = result * i;
     }
     printf("%d", result);    
}

int main(){
     int num;
     scanf("%d",&num);
     Factorial(num);
     return 0;
}
