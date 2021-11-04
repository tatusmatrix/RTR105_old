/* scanf example */
#include <stdio.h>

int main ()
{
  int i;
  char c;
  double d;

  printf ("Enter number: ");
  fflush(stdout);
  scanf ("%d",&i);
  printf ("Your number - %d\n",i);

  printf ("Enter symbol: ");
  fflush(stdout);
  scanf (" %c",&c);
  printf ("Your symbol - %c\n",c);

  //printf ("Enter real number: ");
  //scanf ("%lf",&d);
  // d = 1000000.;
  d = 1.e6;
  printf ("Your real number - %.3f\n",d);

  

  return 0;
}
