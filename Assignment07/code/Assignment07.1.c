#include<stdio.h>
 
int main() {
    int num;
    float root = 1;

    scanf("%d",&num);

    for (int i = 1; i <= num + 1; i++) {
      root = ((num / root) + root) / 2;
    }
       
    printf("%.4f", root);
}