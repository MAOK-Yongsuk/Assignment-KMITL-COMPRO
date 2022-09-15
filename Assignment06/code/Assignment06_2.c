#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
     char txt[50];
     scanf("%s", txt);
     int numtxt = strlen(txt);

     for (int i = 0; i < numtxt; i++)
     {
          if (txt[i] >= 'a' && txt[i] <= 'z'){
               txt[i] = toupper(txt[i]);

          }else if (txt[i] >= 'A' && txt[i] <= 'Z') {
               txt[i] = tolower(txt[i]);
          }
     } 
       
     printf("%s", txt);
     return 0;
}