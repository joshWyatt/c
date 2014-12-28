#include <stdio.h>

int mult( int x, int y );

int main()
{
  int x;
  int y;

  printf("Please enter 2 integers to multiply together\n");
  printf("First integer: ");
  scanf("%d", &x);
  printf("Second integer: ");
  scanf("%d", &y);

  printf("The product of these 2 numbers are %d\n", mult(x, y));

  getchar();
  return 0;
}

int mult( int x, int y )
{
  return x * y;
}