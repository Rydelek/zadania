#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba;

  printf("Podaj liczbe zmiennoprzecinkowa:\n");
  scanf("%f", &liczba);
  printf("Podana liczba to %f lub %e\n", liczba, liczba); /* e-modyfikator dla notacji
							      wykladniczej */

  return 0;
}

