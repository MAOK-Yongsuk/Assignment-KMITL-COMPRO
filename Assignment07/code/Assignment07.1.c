#include<stdio.h>
 
int main() {
    int num;
    float root = 1;

    scanf("%d",&num);

    for (int i = 1; i <= num + 1; i++) {
      root = ((num / root) + root) / 2;
    }

    if(root == 0.5000) {printf("0.0000");}
    else {printf("%.4f", root);}   
    
}