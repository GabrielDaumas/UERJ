/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

void strjoin2(char* d,char* o1,char* o2)
{
    int qtddest = strlen2(d);
    int qtdo1 = strlen2(o1);
    int qtdo2 = strlen2(o2);
    int i = 0;
    if(qtddest>0)
    {
        for(i = 0; i<qtddest;i++)
        {
            d[i] = '\0';
        }
    }
    int j = 0;
    for(i = 0; i<qtdo1;i++)
    {
        d[j] = o1[i];
        j++;
    }
    for(i = 0; i<qtdo2;i++)
    {
        d[j] = o2[i];
        j++;
    }
    
}

int main (void){
   char stringsorigem1[100];
   char stringsorigem2[100];
   char stringsdestino[100];
   printf("Digite uma string de destino:");
   scanf("%s",stringsdestino);
   printf("Digite uma string de origem 1:");
   scanf("%s",stringsorigem1);
   printf("Digite uma string de origem 2:");
   scanf("%s",stringsorigem2);
   strjoin2(stringsdestino,stringsorigem1,stringsorigem2);
   printf("%s",stringsdestino);
}
