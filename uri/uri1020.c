/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>

int main() 
{
  int d, m, a, x;

  scanf("%d", &x);

  a = (x-(x % 365)) / 365;
  m = ((x % 365) - ((x % 365) % 30)) / 30;
  d = (x % 365) % 30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a, m, d);
 
    return 0;
}