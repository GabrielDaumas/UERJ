#include <stdio.h>
#include <string.h>

int contem (char* s1,char* s2)
{
    int count = 0;
    for (int i = 0; i<strlen(s1);i++)
    {
        if(s1[i] == s2[count])
        {
            count++;
            if(count == strlen(s2))
            {
                return 1;
            }
        }
        else
        {
            count=0;
        }
    }
    return 0;
}

int main(void)
{
    char c1[50],c2[50];
    printf("Digite uma palavra: ");
    scanf("%s",c1);
    printf("Digite uma palavra: ");
    scanf("%s",c2);
    if(contem(c1,c2) == 1)
    {
        printf("contem");
    }
}
