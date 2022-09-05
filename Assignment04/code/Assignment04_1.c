#include "stdio.h"
#include "string.h"

int main()
{
     char s[100];    
     scanf("%s", s);
     int num = strlen(s);

     printf("%c", s[num-1]);
     return 0;
}