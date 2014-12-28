#include <stdio.h>

/*
  Table that coverts celsius to farenheit
*/

int main ()
{
  float fahr, celsius;
  int low, high, step;

  low = 0;
  high = 300;
  step = 20;

  celsius = low;

  /* Print a header */
  printf("CELSIUS / FARENHEIT TABLE\n\n");

  while(celsius <= high) {
    fahr = (celsius * 9.0 / 5.0) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

}