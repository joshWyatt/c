#include <stdio.h>

int main ()
{
  int c, b, t, nl;
  b = 0;
  t = 0;
  nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++b;
    if (c == '\t')
      ++t;
    if (c == '\n')
      ++nl;
  }
  printf("There are %d blanks, %d tabs and %d newlines\n", b, t, nl);

  return 0;
}