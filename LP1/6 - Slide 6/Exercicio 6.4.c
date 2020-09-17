#include <stdio.h>

int strlen2(char* str)
{
    int i = 0;
    while(str[i] != '\0')
    {
	      i++;
    }
    return i;
}

int main (void)
{
   char strings[100];
   printf("Digite uma string:");
   scanf("%s",strings);
   printf("%d",strlen2(strings));
}
