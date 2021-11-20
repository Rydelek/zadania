#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float sekundy=3.156e7;
  int wiek=22;

  printf("Podaj swoj wiek:\n");
  scanf("%d", &wiek);
  printf("Twoj wiek w sekundach to w przyblizeniu %.2f s.\n", wiek*sekundy);

  return 0;
}
