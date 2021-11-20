#include <stdio.h>
#include <stdlib.h>
#define MAXDL 20
int main()
{
  char imie[MAXDL];
  char nazwisko[MAXDL];

  printf("Podaj swoje imie:");
  scanf("%s", imie);
  printf("Teraz nazwisko:");
  scanf("%s", nazwisko);
  printf("\nDane podane przez uzytkownika:\n");
  printf("%s, %s\n\n", nazwisko, imie);

  return 0;
}
