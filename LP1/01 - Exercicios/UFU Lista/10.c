#include <stdio.h>
    
int main()
{
  int *p1;
  
  int arr[3];
  for(int i = 0;i<3;i++)
  {
    scanf("%d",&arr[i]);
    p1 = &arr[i];
    *p1*=2;
    printf("%d\n",arr[i]);
  }
  return 0;
}
