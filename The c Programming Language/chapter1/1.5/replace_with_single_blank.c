#include <stdio.h>

int main ()
{
  int c;
  int ss = 0;

  while ((c = getchar()) != EOF){
    if (c == ' '){
      if (ss == 0){
        printf(" ");
        ++ss;
      }
    }
    if (c != ' '){
      ss = 0;
      putchar(c);
    }
  }

  return 0;
}