#include <stdio.h>

int one();
int two();

int main()
{
  // one();
  two();
}

int one()
{
  int c;
  c = (getchar() != EOF);
  // c = 1;
  printf("%d\n", c);
  return 0;
}

int two()
{
  int e = EOF;
  printf("Here is the value of EOF\n");
  printf("%d\n", e);
  return 0;
}