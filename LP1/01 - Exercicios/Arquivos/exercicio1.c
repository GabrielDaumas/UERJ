#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[25];
    scanf("%[^\n]s",str);
    FILE* f = fopen("/home/ime/Documentos/str.txt","w");
    printf("%s",str);
    for(int i = 0; i<strlen(str);i++)
    {
        fputc(str[i],f);
    }
    fclose(f);
}
