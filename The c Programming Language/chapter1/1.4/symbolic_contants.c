#include <stdio.h>

/* print Farenheit-Celsius table using a for loop */

#define  LOWER  0
#define  UPPER  300
#define  STEP   20

int main()
{
  int fahr;

  printf("Farenheit-Celsius TABLE\n");

  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}