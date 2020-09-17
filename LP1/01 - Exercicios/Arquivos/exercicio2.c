#include<stdio.h>
#include<string.h>

int main(void)
{
   
    char s;
    char strreturn[25];
    int i;
    for(i = 0; i<strlen(str);i++)
    {
        strreturn[i] = '\0';
    }
    FILE* f = fopen("/home/ime/Documentos/str.txt","r");
    i = 0;
    int v = fgetc(f);
    while(v != EOF)
    {
        s = '\0';
        s = (char)v;
        strreturn[i] = s;
        i++;
        v = fgetc(f);
    }
    printf("\n%s\n",strreturn);
    fclose(f);
}
