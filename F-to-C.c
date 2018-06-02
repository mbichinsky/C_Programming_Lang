#include <stdio.h>
/*this program prints the conversion table of F to C*/
/*this will print F to C table starting at 0F increasing by 10*/
main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;
  while (fahr <= upper){
    celsius = 5 * (fahr-32) / 9;
    printf ("%3.0f%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
