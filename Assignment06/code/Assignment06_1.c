#include <stdio.h>
#include <string.h>

int main() {
     char txt[50], *c;
     scanf("%s", txt);
     c = txt;

     while (*c != '\0'){
          if (*c >= 'a' && *c <= 'z'){
               printf("%c", *c - 32);
          }else if (*c >= 'A' && *c <= 'Z') {
               printf("%c", *c + 32);
          }
          c++;
     }
     return 0;
}