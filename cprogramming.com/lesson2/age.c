#include <stdio.h>
int main()
{
  int age;

  printf( "What is your age? " );
  scanf( "%d", &age );

  if( age == 34 ){
    printf( "You are telling the truth\n" );
  }else if( age < 34 ){
    printf( "You are actually older than that\n" );
  }else{
    printf( "You are actually younger than that\n" );
  }
  return 0;
}