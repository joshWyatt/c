#include <stdio.h>

void logger(int num);

int main()
{
  int input;

  printf("Please enter a number 1 through 4: ");
  scanf("%d", &input);

  switch(input){
    case 1:
      logger(input);
    break;

    case 2:
      logger(input);
    break;

    case 3:
      logger(input);
    break;

    case 4:
      logger(input);
    break;

    default:
      printf("You did not follow directions\n");
      
  }
  return 0;
}

void logger(int num)
{
  printf("You set input to: %d\n", num);
}