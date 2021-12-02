#include <stdio.h>
#include "bee_1113.h"

int main(void)
{
  int a, b;

  do
  {
    scanf("%d %d", &a, &b);
    if (a != b)
    {
      bool result = check_increasing(a, b);
      printf((result == false) ? "Crescente\n" : "Decrescente\n");
    }
  } while (a != b);

  return 0;
}
