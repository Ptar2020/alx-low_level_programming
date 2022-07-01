#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main Entry point
 *
 *Return:Always 0(Success)
 */
int main(void)
{
  srand(time(0));
  int n = rand()-RAND_MAX/2;
  if (n > 0)
    {
      printf("is positive\n");
    }
  else if (n == 0)
    {
      printf("is zero\n");
    }
  else
    {
      printf("is negative\n");
    }
  return 0;
}
