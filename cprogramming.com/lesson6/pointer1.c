#include <stdio.h>

int main()
{
  int x = 4;
  int *p = &x;

  printf( "x: %d\n", x );
  printf( "&x: %p\n", &x );
  printf( "I said that *p = &x \n");
  printf( "p: %p\n", p );
  printf( "*p: %d\n", *p );

  return 0;
}