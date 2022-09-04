#include "stdio.h"

int main()
{
     char s[100];    
     scanf("%s", s);
     int num = strlen(s);

     for (int i = 0; i < num+1; i++)
     {          
          if(s[i] == NULL) printf("%c", s[i-1]);        
     }     
     return 0;
}