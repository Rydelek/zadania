#include <stdio.h>
#include <stdlib.h>

int main()
{
   float przepelnienie=1.0e38;
  przepelnienie=przepelnienie*1.0e1;

  printf("Najpierw sprawdzmy rozmiary typow integer i float w bajtach:\n");
  printf("Rozmiar int (w bajtach): %d\n", sizeof (int));
  printf("Rozmiar float (w bajtach): %d\n", sizeof (float));

  printf("Przepelnienie integer, czyli 2147483647 + 1 = %d\n",2147483647+1 );
  printf("Niedopelnienie float, czyli 1.0e-37 / 10 = %f\n", 1.0e-37/10);

  printf("Przepelnienie float, czyli 1.0e38 * 10= %f\n",przepelnienie);

  return 0;
}
