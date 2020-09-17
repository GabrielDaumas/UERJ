/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    char str[10][25];
    char ch[25];
    for(int i = 0; i<10;i++)
    {
        for(int j = 0; j<25;j++)
        {
            ch[j] = '\0';
            str[i][j] = '\0';
        }
    }
    for(int i = 0; i<10;i++)
    {
        printf("Digite uma palavra");
        scanf("%s",ch);
        for(int j = 0; j<25;j++)
        {
            if(ch[j] != '\0')
                str[i][j] = ch[j];
            ch[j] = '\0';
        }
    }
    FILE* f = fopen("str.txt","w");
    for(int i = 0; i<10;i++)
    {
        for(int j = 0; j<25;j++)
        {
            if(str[i][j] != '\0')
                fputc(str[i][j],f);
        }
        fputc('\n',f);
    }
    fclose(f);
}
