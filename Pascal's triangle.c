#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent)
{
  if(exponent==0)
  {
    return 1;
  }
  else{
    return base*power(base, exponent-1);
  }
}
int main(void) {
  int limit;
  printf("Enter the number of rows: ");
  scanf("%d", &limit);
  int arr[limit][limit];
  for (int i=0; i<limit; i++)
  {
    for (int j=0; j<i; j++)
    {
      if(j==0 || j==i-1)
      {
        arr[i][j]=1;
      }
      else
      {
        arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
      }
    }
  }
  for (int i=0; i<limit; i++)
  {
    for (int j=0; j<i; j++)
    {
      printf("%d ",arr[i][j] );
    }
    printf("\n");
  }

  return 0;
}