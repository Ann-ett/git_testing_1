#include <stdio.h>

int main()
{
  printf("\n%d\n",printf("AAA"));

  printf("\n%d",printf("\n%d",printf("AAA")));

  printf("\n%d",printf("\n\e[0;31mA\e[0m"));
  return 0;
}